int m=0;
void find(BiTree &T,int k)
{
    if(T==NULL) return;
    else {
        m++;
        if(m==k)
        {
            printf("此节点值为%lf",T.data);
            return;
        }
        else
        {
            find(T->lchild,k);
            find(T->rchild,k);
        }
    }
}

