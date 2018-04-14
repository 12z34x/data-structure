
FindInDegree(AlGraph &G,int indegree[] )
{
    int i;
    ArcNode *l;
    int w;
    for(i=0;i<G.vexnum;i++)
    {
        if(AdjList[i]->firstarc!=NULL)
            l=AdjList[i]->firstarc;
        w=l.adjvex;
        indegree[w]++;
        l=l->nextarc;
        while(l!=NULL)
        {
            w=l.adjvex;
            indegree[w]++;
            l=l->nextarc;
        }
    }
}
void main()
{
    AlGraph *G;
    TopologicalSort(G);//ÏêÇé¼û½Ì²ÄP182
}
