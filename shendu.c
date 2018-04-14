#include<stdio.h>
int n=0，m=1,max=0,sum=0;;
void compare(&L1,&L2);
{
    while(!GListEmpty(L1)&&!GListEmpty(L2))
    {
        if(GetHead(L1).tag==1&&GetHead(L2).tag==1)
        {
            compare(GetHead(L1),GetHead(L2));
            compare(GetTail(L1),GetTail(L2));
        }
        else if(GetHead(L1).tag==0&&GetHead(L2).tag==0){
                if(GetHead(L1).atom!=GetHead(L2).atom){printf("此二表不相等");return 0;}
               compare(GetHead(L1),GetHead(L2));}
        else {printf("此二表不相等");return 0;
        }
    }
    if(!(!GListEmpty(L1)&&!GListEmpty(L2)){printf("此二表不相等");return 0;}
}
void main(){
    char S1[]={};
    char S2[]={};
    printf("请输入广义表1");
    gets(S1);
    printf("请输入广义表2");
    gets(S2);
    CreateGList(&L1,S1);
    CreateGList(&L2,S1);
    compare(L1,L2);
    printf("广义表相等");
}
