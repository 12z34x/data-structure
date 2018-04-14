#include<stdio.h>
int n=0，m=0,max=0,sum=0,z=0;
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
		printf("%d，在第%d层",GetHead(L).atom,z);
                }
          z=--;
}
void main(){
    char S[]={};
    printf("请输入广义表");
    gets(S);
    CreateGList(&L,S);
    zuida(L);
    printf("广义表深度为:%d\n最大整数为:%d\n数据之和为:%d",m,max,sum);
}
