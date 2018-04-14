int m=0,div=0;
void manipulate(CSTree &T)
{
    if(T==NULL) return;
    else
    {
        if(T->nextsibling!=NULL)
        {
            div++;
            manipulate(T->nextsibling);
        }
        if(T->firstchild!=NULL)
        {
            div++;
            manipulate(T->firstchild);
        }
        else
        {
            m++;
            return;
        }
    }
}
