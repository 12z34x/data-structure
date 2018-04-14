#include<stdio.h>
int n=0，m=0,max=0,sum=0,z=0;
void zuida(&L,int l,int x)
{
    int e;
        if(L.tag==1)
        {   z++;
	    if(!GListEmpty(L)) {
            zuida(GeatHead(L),l,x);
            z--;
            zuida(GetTail(L),l,x);}
        }
        else if(L.tag==0) {
		if(z==l)
		printf("%d:",GetHead(L).atom);
		if(x==GetHead(L).atom) DeleteFirst_GL(L,e);
                }
          z=--;
}
void main(){
    int l,x;
    char S[]={};
    printf("请输入广义表");
    gets(S);
    printf("请输入想要删除的层\n");
    scanf("%d",&l);
    printf("想要删除的项");
    scanf("%d",&x);
    CreateGList(&L,S);
    printf("在%d层的有:\n",l);
    zuida(L,l,x);
}
