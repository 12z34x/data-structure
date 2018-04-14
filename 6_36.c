int z=0;
int similar(BiTree &T,BiTree &t)
{
    if(z==1) return;
    else
    {
        if(T==NULL&&t==NULL)
            return;
        else if(T!=NULL&&t!=NULL)
        {
        similar(T->lchild,t->lchild);
        similar(T->rchild,t->rchild);
        }
        else
        {
        z=1;
        return;
        }
    }
}
