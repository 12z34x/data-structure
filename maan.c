#include<stdio.h>
#define N 100
void main(){
int a[N][N]={0};
int find[N]={0};
int b[N]={0};
int i,j,k=0,m,n,c,min,max;
printf("请输入行数和列数\n");
scanf("%d %d",&m,&n);
printf("初始化二维数组\n");
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
        {
            min=a[i][0];
            for(j=0;j<n;j++)
        if(a[i][j]<min) {min=a[i][j];find[i]=j;}
    }
    while(k<m){
            c=find[k];
        max=a[k][c];
        for(i=0;i<m;i++)
            if(a[i][c]>max)b[k]=1;
        k++;
    }
    i=0;
    j=0;
    while(i<m)
       {
        c=find[i];
        if(b[i]==0) {printf("%d(%d,%d)\n",a[i][c],i,c);j++;}
        i++;
       }
    if(j==0) printf("无马鞍点！");
    else printf("此%d个点是马鞍点",j);
}
