#define N 10
int m=0;
void back(AlGraph &G,VNode &v,int w,VNode &e)
{
    if(v.data==w) e=v;
}
void data(VNode &v)
{
    v.data=m;
    m++;
}
void manipulate(AlGraph &G,VNode &v,int k)
{
    int i,j;
    int a[N]={};
    int b[G.vexnum][G.vexnum]={};
    key(G,v,a,k);
        for(i=0;i<G.vexnum;i++)
            for(j=0;j<G.vexnum;j++)
        if(a[i][j]==0)
        printf("第%d个顶点与第%d个顶点间无此路径",i,j);
        else printf("第%d个顶点与第%d个顶点间有此路径",a[i]);
}
void key(AlGraph &G,VNode &v,int a[],int k)
{
    if(v->firstarc==NULL)return;
    int w;
    VNode *e;
    ArcNode *l;
    l=v->firstarc;
    w=l.adjvex;
    if(a[w]==k) b[v.data][w]=1;
    if(a[w]<a(v)+1)
    a[w]=a[v]+1;
    if(a[w]==k) b[v.data][w]=1;
    l=l->nextarc;
    while(l!=NULL)
    {
        w=l.adjvex;
        if(a[w]==k) b[v.data][w]=1;
        if(a[w]<a(v)+1)
        a[w]=a[v]+1;
        if(a[w]==k) b[v.data][w]=1;
        DFSTraverse(G,v,back(G,v,w,e));
        key(G,e,a,k);
        l=l->nextarc;
    }
}void main()
{
    AlGraph *G;
    int k;
    DFSTraverse(G,v,data);
    printf("输入k值");
    scanf("%d",&k);
    DFSTraverse(G,v,manipulate(G,v,k));
}
