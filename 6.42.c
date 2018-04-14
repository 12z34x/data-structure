int count(BiTree &T,int m)
{
    if(T==NULL) return 0;
    else
    {
        if(T->lchild==NULL&&T->rchild==NULL)
        {
            m++;
            return m;
        }
        else return count(T->lchild)+count(T->rchild);

    }
}
