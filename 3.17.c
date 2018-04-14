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
    char c='#';//初始c
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
            printf("不是");
            DestoryStack(S);
            return 0;
        }
n++;
}
if(dh[n]=='@') printf("是的");
else printf("不是");
return 0;
}
void main(){
LineEdit();
}
