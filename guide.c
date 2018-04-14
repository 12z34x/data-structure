#include<stdio.h>
#include<string.h>
#define N 6
#define max 10000
void main()
{
    int i,j,v,w,min,m[N+1]={};
    int a[N+1][N+1]={},D[N+1];
    char find[N+1]={},road[N+1][N+1]={};
    printf("See the west gate as the origin ,please initialize the weight of arcs\n");

    for(i=1;i<=N;i++)
   {
       for(j=1;j<=N;j++)
        {
            scanf("%d",&a[i][j]);
        }
        road[i][0]=49;
        D[i]=a[1][i];
        m[i]=1;
        find[i]='f';
   }
    for(i=2;i<=N;i++)
    {
        min=max;
        for(w=2;w<=N;w++)
            if(find[w]=='f')
                if(min>D[w])
                {
                     v=w;
                    min=D[v];
                }
        find[v]=v+48;
        road[v][m[v]]=find[v];
        for(w=2;w<=N;w++)
        {
            if(find[w]=='f'&&(min+a[v][w]<D[w]))
            {
                D[w]=min+a[v][w];
                strcpy(road[w],road[v]);
                m[w]=m[v]+1;
            }
        }
    }
    //printf("Please choose the vexnode you want to visit\n");
    //scanf("%d",&v);
    for(v=1;v<=6;v++)
    {
        puts(road[v]);
        printf("The weight is %d\n",D[v]);
    }

}
