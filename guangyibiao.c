#include<stdio.h>
int n=0��m=0,max=0,sum=0,z=0;
void zuida(&L)
{
        if(L.tag==1)
        {   z++;
	    if(!GListEmpty(L)) {
            zuida(GeatHead(L));
            z--;
            zuida(GetTail(L));}
        }
        else if(L.tag==0) {
		if(z>m) m=z;
                if(n==0) {sum=GetHead(L).atom;max=GetHead(L).atom; n++}
                else if(max>GetHead(L).atom) max=GetHead(L).atom;
                sum=sum+GetHead(L).atom;
		printf("%d���ڵ�%d��",GetHead(L).atom,z);
                }
          z=--;
}
void main(){
    char S[]={};
    printf("����������");
    gets(S);
    CreateGList(&L,S);
    zuida(L);
    printf("��������Ϊ:%d\n�������Ϊ:%d\n����֮��Ϊ:%d",m,max,sum);
}
