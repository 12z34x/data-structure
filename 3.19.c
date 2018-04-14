#include<stdio.h>
#define N 100
#define Stack_INIT_SIZE 100
int LineEdit()
{
    int i=0,j=0,find=0;
    char ch[N];
    char c='#';
    InitStack(S);
    ch[i]=getchar();
    while(ch[i]!='@'){
        i++;
        ch[i]=getchar();
    }
    while(ch[j]!='@'&&find==0){
        if((ch[j]=='}'||']'||')')&&StackEmpty(S)) break;
        if(ch[j]=='}'||']'||')') Pop(S,c);
        switch(ch[j]){
            case'}':if(c=='}') ;else find=1;break;
            case']':if(c==']') ;else find=1;break;
            case')':if(c==')') ;else find=1;break;
            default:Push(S,ch[j]);
    }
        j++;
}
if(ch[j]=='@'&&find==0) printf("∆•≈‰");
else printf("≤ª∆•≈‰");
return 0;
}
