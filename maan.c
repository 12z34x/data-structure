#include<stdio.h>
#define N 100
void main(){
int a[N][N]={0};
int find[N]={0};
int b[N]={0};
int i,j,k=0,m,n,c,min,max;
printf("����������������\n");
scanf("%d %d",&m,&n);
printf("��ʼ����ά����\n");
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
    if(j==0) printf("�����㣡");
    else printf("��%d����������",j);
}
