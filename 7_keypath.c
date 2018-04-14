#define N 10
int m=0;
int z=0;
void data(VexNode &v)
{
    PutVex(G,v,m);
    m++;
}
void manipulate(Graph &G,VexNode &v)
{
    int i;
    int a[N]={};
    key(G,v,a);
    printf("第z点到其余各点的距离:%d",z);
        for(i=0;i<m;i++)
    {
        if(a[i]==0)
        printf("无简单路径");
        else printf("%d",a[i]);
    }
    z++;
}
void key(Graph &G,VexNode &v,int a[])
{
    if(FirstAdjVex(G,v)==NULL)return;
    InsertVex(G,w);
    w=FirstAdVex(G,v);
    if(a[w]<a(v)+1)
    a[w]=a[v]+1;
    w=NextAdjVex(G,v,w);
    while(w!=NULL)
    {
        if(a[w]<a(v)+1)
        a[w]=a[v]+1;
        key(G,NextAdjVex(G,v,w),a);
        w=NextAdjVex(G,v,w);
    }
}
void main()
{
    CreateDG(Graph &G);
    DFSTraverse(G,v,data);
    DFSTraverse(G,v,manipulate(G,v));
}
