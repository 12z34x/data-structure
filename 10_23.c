void insert()
{
    for(i=1;i<=L.length;i++)
    {
        if(L.r[i].key<L.r[i-1].key)
        {
            L.r[L.length]=L.r[i]
            for(j=i-1;L.r[length].key<L.r[j].key;j--)
            {
                L.r[j+1]=L.r[j];
            }
            L.r[j+1]=L.r[length];
        }
    }
}
