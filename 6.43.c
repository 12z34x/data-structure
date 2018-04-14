void exchange(BiTree &T)
{
    BiTree t;
    if(T==NULL) return;
    else
    {
        t=T->lchild;
        T->lchild=T->rchild;
        T->rchild=t;
        exchange(T->lchild);
        exchange(T->rchild);
    }
}
