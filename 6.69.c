int m=0;
void print(BiTree &T,char **ch,int n,int m ,int a)
{
    if(T==NULL) return ch;
    else{
    if(a==0)
    ch[m][n/2]=T.data;
    else ch[m][BiTreeDepth(T)+n/2]
    print(T->lchild,ch,n/2,m+1,0);
    print(T->rchild,ch,n/2,m+1,1);
    }
}
void main(){
    int i=0;
CreateBiTree(&T);
  N=BiTreeDepth(T)*2;
    char ch[N][N]={};
    print(T,ch,N);
    while(i<N)
{puts(ch[i]);
i++;
}
}
