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
    int i,j;
    int a[100]={},b[100]={};
    check(T,a);
    for(i=1;i<z;i++)
    {
        if(a[i]<=x])
            b[i]=a[i];
    }
   for(j=i-1;j>=1;j--)
    printf("%d",b[j]);
}
