int qipao()
{
    int  a=0;b=0;t,i,j;
    while(a+b==L.length)
    if(a==b)
    {
        for(i=1+b;i<=L.length-1;i++)
        {
            if(L.r[i].key>L.r[i+1].key)
            {
                t=L.r[i+1].key;
                L.r[i+1].key=L.r[i].key;
                L.r[i].key=t;
            }
        }
        a++;
    }
    else for(j=L.length-a;j>=2;j--)
    {
        if(L.r[j].key<L.r[j-1].key)
        {
            t=L.r[j+1].key;
            L.r[j+1].key=L.r[j].key;
            L.r[j].key=t;

        }
        b++;
    }
}
