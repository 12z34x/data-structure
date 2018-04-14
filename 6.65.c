void create(BiTree &T,BiTree a[],BiTree b[])//假设a为先序遍历，b为中序遍历
{
    BiTree lx[100];//l,r代表左右子树数组，x,z代表先序和后序
    BiTree rz[100];
    BiTree lx[100];
    BiTree rz[100];
    int i=0,j=0;
    T=a[0];//赋值树根
    while(a[0]!=b[i])
    {
       lz[i]=b[i];//将先序和中序的左子树构建
       lx[i]=a[i+1];
       i++;
    }
    i++;
    while (b[j+i]!=0)
    {
        rz[j]=b[i+j];//将先序和中序的右子树构建
        rx[j]=a[i+j];
        j++;
    }
    create(T->lchild,lx,lz);//进入左子树构建
    create(T->rchild,rx,rz);//进入右子树构建
}
