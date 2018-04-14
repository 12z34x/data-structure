int m;
m=G.vexnum;
void DIJ(AlGrapth &G,int v0,int *p[][m],int D[] )
{
    int v,min;
    for(v=0;v<G.vexnum;++v)
    {
        final[v]=0;
        D[v]=G.arcs[v0][v];
        for(w=0;w<G.vexnum;++w) p[v][w]=0;
        if(D[v]<INFINITY){p[v][v0]=1;p[v][v]=1;}//小于无穷大
    }
    for(i=1;i<G.vexnum;++i)
    {
        min=INFINITY;
        for(w=0;w<G.vexnum;++w)
            if(!final[w])
                if(D[w]<min){v=w;min=D[w];}
            final[v]=1;
            for(w=0;w<G.vexnum;++w)
                if(!final[w]&&(min+G.arcs[v][w]<D[w]))
            {
                D[w]=min+G.arcs[v][w];
                p[w]=p[v];
                p[w][w]=1;
            }
    }
}
