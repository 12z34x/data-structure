#include<stdio.h>
#define N 50
int i=0;
void main(){
    int a[N]={};
    int b[N]={};
CreatBiTree(BiTree &T);
if(p==q)printf("为p或q的公共祖先");
else  find(T,p,q);
}
//**************//
BiTNode *find(BiTree &T,BiTree &p,BiTree &q){
if(T==NULL) return T;
if(T==p) return T;
if(T==q) return T;
BiTNode * l=find(T->lchild,p,q);
BiTNode * r=find(T->rchild,p,q);
if (l != NULL&&right != NULL) return T;

    return l == NULL ? r : l;
}
