#include<stdio.h>
#include<stdlib.h>
#define N 100
#define M 10;
int LineEdit()
{
    int i=0,n=0;
    char S[N];
    char ch;
    char dh[N];
    char c='#';//��ʼc
    InitStack(S);
    ch=getchar();
    while(ch!='@'){
        if (ch=='&')
         dh[i++]=ch;
        else Push(S,ch);
        ch=getchar();
}
while(!StackEmpty(S)){
   Pop(S,c);
          if(dh[n]!=c||i==0)
        {
            printf("����");
            DestoryStack(S);
            return 0;
        }
n++;
}
if(dh[n]=='@') printf("�ǵ�");
else printf("����");
return 0;
}
void main(){
LineEdit();
}
