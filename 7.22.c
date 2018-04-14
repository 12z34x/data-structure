int m=0;
void key(AlGraph &G,VNode &v,int a[])
{
    m=1;//假设顶点位置从一开始
    if(v->forstarc==NULL)return;
    ArcNode *l;
    l=v->firstarc;
    int w;
    w=l.adjvex;
    a[m][w]=1;
    l=l->nextarc;
    while(l!=NULL)
    {
        w=l.adjvex;
        a[m][w]=1;
        l=l->nextarc;
    }
    m++;
}
int main()
{
    AlGraph *G;
    int a[G.vexnum][G.vexnum]={};
    DFSTraverse(G,v,key(G,v,a));
    for(int i=1;i<=G.vexnum;i++)
        for(int j=1;j<=G.vexnum;j++)
        if(a[i][j]!=0)printf("第%d个顶点到%d个顶点有路径",i,j);
}
