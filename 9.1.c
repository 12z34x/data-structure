int yes=1;
int z=0;
void check(BSTree T,int a[])
{
    if(T!=NUll)
    {
        check(T->lchild);
        z++;
        a[z]=T.key;
        check(T->rchild);
    }

}
void main()
{
    int a[100]={};
    check(T,a);
    for(i=1;i<z;i++)
    {
        if(a[i]>a[i+1])
            yex=0;
    }
    if(yes) printf("Yes");
    else printf("No");
}
