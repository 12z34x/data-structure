#include<stdio.h>
int n=0��m=0,max=0,sum=0,z=0;
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
    printf("����������");
    gets(S);
    printf("��������Ҫɾ���Ĳ�\n");
    scanf("%d",&l);
    printf("��Ҫɾ������");
    scanf("%d",&x);
    CreateGList(&L,S);
    printf("��%d�����:\n",l);
    zuida(L,l,x);
}
