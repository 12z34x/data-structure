#include<stdio.h>
#include<stdlib.h>
#define N 100
int cmp(char a,char b){
    if((a=='+'||a=='-')&&(b=='*'||b=='/'))return -1;
    else if((b=='+'||b=='-')&&(a=='*'||a=='/')) return 1;
    else return 0;
}
int main(){
    int i=0,j=0;
    char a[N],ch;
    do
    {
        ch=getchar();
        a[i]=ch;
        i++;
    }
    while(ch!='@')
    InitStack (S1);//ÔËËã·û
    InitStack(S2);//Êä³ö
    Push(S1£¬'#');
    while(a[j]!='@'){
    switch(a[j]){
case'+':
case'-':
case'*':
    case'/':if(cmp(a[j],GetTop(S1))>0||GetTop(S1)=='(') Push(S1,a[j]);
    else {Pop(S1,e);Push(S2,e);} break;
    case')':while(GetTop(S1!='(')){Pop(S1,e);Push(S2,e);} Pop(S1,e);break;
    case'(':Push(S1,'(');
    default: Push(S1,a[j]);
    j++;}
    Pop(S2);
    return 0;
    }
}
