void create(BiTree &T,BiTree a[],BiTree b[])//����aΪ���������bΪ�������
{
    BiTree lx[100];//l,r���������������飬x,z��������ͺ���
    BiTree rz[100];
    BiTree lx[100];
    BiTree rz[100];
    int i=0,j=0;
    T=a[0];//��ֵ����
    while(a[0]!=b[i])
    {
       lz[i]=b[i];//����������������������
       lx[i]=a[i+1];
       i++;
    }
    i++;
    while (b[j+i]!=0)
    {
        rz[j]=b[i+j];//����������������������
        rx[j]=a[i+j];
        j++;
    }
    create(T->lchild,lx,lz);//��������������
    create(T->rchild,rx,rz);//��������������
}
