#include<stdio.h>
#include<stdlib.h>
int fy(int x,int y){
    if(x<y) return 0;
else if(x==y) return 1;
else return(2*fy(x-1,y)-fy(x-y,y));
}
int main(){
    int k,i=0,n;
    printf("���������");
    scanf("%d",&k);
    printf("������Ҫչʾ������");
    scanf("%d",&n);
    n++;
    InitQueue(Q);
    for(i=0;i<=n;i++){
        if(!IsQueueFull) EnQueue(Q,fy(i,k));
        else {DeQueue(Q,e);EnQueue(Q,fy(i,k))
    }
    return 0;}
