int z=0;
BiThrNode *find (BiThrTree &T,BiThrTree &p)
{
    BiThrTree l;
    BiThrTree r;
    if(z!=0||T==NULL) return T;
    else
    {
        if(T!=p)
        {
            l=find(T->lchild,p);
            r=find(T->rchild,p);
        }
        else if(T.ltag==0) {z=1;return find(T->lchild,p);}
        else {z=1;return find(T->rchild,p);}
    }
}
