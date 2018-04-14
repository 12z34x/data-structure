#include<stdio.h>
#include<stdlib.h>
int main(){
char ch;
InitStck(S);
InitQueue(Q);
ch=getchar();
while(ch!=@){
    Push(S,ch);
    EnQueue(Q,ch);
}
while(!IsQueueEmpty(Q)){
    Pop(S,e);
    DeQueue(Q,d);
    if(e!=d){
        printf("不是回文问");
        return 0;
    }
}
printf("不是回文");
return 0;
}
