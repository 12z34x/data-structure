#include<stdio.h>
#include<stdlib.h>
#define N 60
int z=0;
typedef struct{
char f;
char c[N];
unsigned int q;
unsigned int a;
unsigned int l;
unsigned int r;
unsigned int p;
}Tree,*Huff;
void Print(){
    FILE *fp1,*fp2;
    char ch[N][50]={};
    char a;
    int i=0,j=-1,k;
    if((fp1=fopen("f:\\CodeFile.txt","r"))==NULL){
printf("erro");
exit(0);
}
if((fp2=fopen("f:\\CodePrin.txt","w"))==NULL){
printf("erro");
exit(0);
}
    a=fgetc(fp1);
 while(a!=EOF){
    if(i>=N) break;
    else if(j<50){
    j++;}
    else {j=0;i++;}
    ch[i][j]=a;
      a=fgetc(fp1);
}
for(k=0;k<=i;k++){
puts(ch[k]);
fputs(ch[k],fp2);
printf("\n");
}
fclose(fp2);
fclose(fp2);
}
void Decoding(char *a,char b[][N],int n){
FILE *fp1,*fp2;
int i=0,j=0,k;
char ch[N][N]={};
char c[N]={};
if((fp1=fopen("f:\\CodeFile.txt","r"))==NULL){
printf("erro");
exit(0);
}
if((fp2=fopen("f:\\TextFile.txt","w"))==NULL){
printf("erro");
exit(0);
}
    ch[i][j]=fgetc(fp1);
while(ch[i][j]!=EOF){
    k=0;
    do{
            if(strcmp(ch[i],b[k])==0)  {fputc(a[k],fp2);i++;j=-1;break;}
            k++;
    } while(k<=n);
    j++;
    ch[i][j]=fgetc(fp1);
}
fclose(fp2);
fclose(fp1);
}
void Encoding(){
FILE *fp1,*fp2,*fp3;
int i=0,j,m,n;
char ch;
char a[N]={};
char b[N][N]={};
if((fp1=fopen("f:\\hfmTree.txt","r"))==NULL){
printf("erro");
exit(0);
}
   ch=fgetc(fp1);
while( ch!=EOF){
        j=0;
    if(ch>49) {a[i]=ch; ch=fgetc(fp1);
     continue;}
    else do{
        b[i][j]=ch;
        j++;
        ch=fgetc(fp1);}
     while(ch==49||ch==48);
i++;
}
fclose(fp1);
if((fp2=fopen("f:\\ToBeTran.txt","r"))==NULL){
printf("erro");
exit(0);
}
if((fp3=fopen("f:\\CodeFile.txt","w"))==NULL){
printf("erro");
exit(0);
}
while(1){
    ch=fgetc(fp2);
    if(ch==EOF) break;
    else {
        for(m=0;m<i;m++)
            if(a[m]==ch) {fputs(b[m],fp3);break;}
    }
}
fclose(fp3);
fclose(fp2);
Decoding(a,b,i-1);
}
void print(Huff ht,int n,int b,FILE *fp,FILE *FP)
{
    int i=1,j,k;
    while(n!=0)
        {if(ht[i].a==n){j=i;break;}
        i++;
        }
        i=1;
        while(n!=0&&b<50)
        {if(ht[i].a==ht[j].p){k=i;break;}
        i++;
        }
        if(n>0){
    printf("第%d层权值为：%d ",z,ht[j].q);
    fputc((ht[j].q+48),FP);
    if(b<50) {strcpy(ht[j].c,ht[k].c);
       ht[j].c[z-1]=b;}
        else ht[j].c[z]=NULL;
        printf("  %s  ",ht[j].c);
    if(ht[j].f!='#') {printf("此叶节点符号为：%c 编码为：%s\n",ht[j].f,ht[j].c);fputc(ht[j].f,fp);fputs(ht[j].c,fp);}

    else{z++;
     fputc('(',FP);
    print(ht,ht[j].l,48,fp,FP);
    fputc(',',FP);
    print(ht,ht[j].r,49,fp,FP);
     fputc(')',FP);
      z--;}
      }

}
void main(){
    int n,i,m,k,j,t=0,x=1;
    char fu;
    Huff ht;
    FILE *fp1,*fp2;
    if((fp1=fopen("f:\\hfmTree.txt","w"))==NULL){
printf("erro");
exit(0);
}
    if((fp2=fopen("f:\\TreePrint.txt","w"))==NULL){
printf("erro");
exit(0);
}
    printf("请输入字符集数：\n");
    scanf("%d",&n);
    ht=(Huff)malloc((2*n)*sizeof(Tree));
    m=n;
    printf("请输入字符 权值：\n");
    for(i=1;i<=n;i++)
    {
        getchar();
        ht[i].f=getchar();
        getchar();
        scanf("%d",&ht[i].q);
        ht[i].a=i;
        ht[i].l=0;
        ht[i].r=0;
        ht[i].c[0]=NULL;
    }
    while(m>1)
    {
        n++;
       for(j=x;j<n-1;j++)
		for(k=j+1;k<n;k++)
			if(ht[j].q>ht[k].q)
			{
                t=ht[j].q;ht[j].q=ht[k].q;ht[k].q=t;
                fu=ht[j].f;ht[j].f=ht[k].f;ht[k].f=fu;
                t=ht[j].l;ht[j].l=ht[k].l;ht[k].l=t;
                t=ht[j].r;ht[j].r=ht[k].r;ht[k].r=t;
                t=ht[j].a;ht[j].a=ht[k].a;ht[k].a=t;
			}
		ht[n].q=ht[x].q+ht[x+1].q;
		ht[n].l=ht[x].a;
		ht[n].r=ht[x+1].a;
		ht[n].a=n;
		ht[n].f='#';
		ht[n].c[0]=NULL;
		ht[x].p=n;
		ht[x+1].p=n;
        x=x+2;
        m--;
    }
    printf("先序遍历的方式输出哈夫曼树:\n");
    print(ht,n,50,fp1,fp2);
    fclose(fp2);
    fclose(fp1);
    Encoding();
    Print();
}
