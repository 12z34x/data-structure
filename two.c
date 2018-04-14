#include<stdio.h>
int z=0;
int check(BiTree T)//
{
    if(T==NULL) return;
    if(T->lchild!=NULL)
        if(T->lchild>T.data)){printf("NO£¡");z=1;return 0;}
    if(T->rchild!=NULL)
        if(T->rchild.data>T.data){printf("NO£¡");z=1;return 0;}
check(T->lchild);
check(T->rchild);
return 0;
}
int main(){
CreatBiTree(BiTree &T)
check();
if(z==1)printf("NO!");else printf("YES!");
return 0
}
