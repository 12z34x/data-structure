#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define N 10
typedef struct LindList
{
	int h;
	int l;
	int d;
	struct LindList *next;
}stack;
//����
stack* create()
{
      stack *st=(stack *)malloc(sizeof(stack));
      st->next=NULL;
      return st;
}
//��
int isEmpty( stack* st)
{
      if(st->next==NULL) return 1;
      else     return 0;
}
//push����
void push(stack* st,int a,int b,int c)
{
    stack *p;
    stack *q=(stack *)malloc(sizeof(stack));
    p=st;
    while (p->next!=NULL)
    {p=p->next;}
    q->h=a;
    q->l=b;
    q->d=c;
    p->next=q;
    p=p->next;
    p->next=NULL;
}

//pop����
void pop(stack* st)
{
         if(isEmpty(st))
      {
          printf("ջ��");
      }
    else{stack *p=(stack *)malloc(sizeof(stack));
    stack *q;
    q=st;
    p=q->next;
    while (p->next!=NULL)
        {   q=q->next;
            p=q->next;
        }
        q->next=NULL;
        free(p);}
}

//����
void destroy(stack* st)
{
    free(st);
}

stack *find(int b[][N],int w ,int z){
    stack *head,*r,*p;
    int i=1,j=1,d=0,k=0,x,y;//��㷽��
    head=create();
    r=head;
    printf("��������������ʾѰ�ҹ���");
    do{for( x=0;x<=w+1;x++)
{
    printf("\n");
    for( y=0;y<=z+1;y++)
printf("%d ",b[x][y]);}
printf("\n");printf("%d,%d",k,d);
            if(b[i][j]==0){
                b[i][j]=2;
                if(isEmpty(head))
                push(head,i,j,0);
                else push(head,i,j,d);
                k=0;
            switch(d){
                case 0:j++;break;
                case 1:i++;break;
                case 2:j--;break;
                case 3:i--;break;
                default:break;
            }
            }
            else  if(b[i][j]==3) {push(head,i,j,d);break;}
            else{
                while(k==4&&!isEmpty(head))
                {
                    pop(head);
                     switch(d){
                case 0:j--;break;
                case 1:i--;break;
                case 2:j++;break;
                case 3:i++;break;
                default:;}
                b[i][j]=1;
                    k=-1;
                }
                if(k<4)
                {
            switch(d){
                case 0:j--;break;
                case 1:i--;break;
                case 2:j++;break;
                case 3:i++;break;
                default:;}
                k++;d=(d+1)%4;
                  switch(d){
                case 0:j++;break;
                case 1:i++;break;
                case 2:j--;break;
                case 3:i--;break;
                default:;
            }
}
}
}while(!isEmpty(head));
       return(head);
       }

void print(stack *st){
    stack *p;
    p=st;
    if(p->next==NULL)
        printf("δ�ҵ��ܴ�·��");
else {printf("���·��\n");while(p->next!=NULL){
    p=p->next;
    printf("%d,%d,%d\n",p->h,p->l,p->d);
    }
}
}

int main(){
int m,n,i,j,x,y,index=0;
stack *road;
int a[N][N]={};
printf("�������Թ����,��");
scanf("%d,%d",&m,&n);
for(i=0;i<=m+1;i++){
                {a[i][0]=1;a[i][n+1]=1;}
        for(j=0;j<=n+1;j++)  {a[m+1][j]=1;a[0][j]=1;}}

while(1){
        if(index==0){
printf("�����ó���(������1)");
scanf("%d,%d",&x,&y);
a[x][y]=3;
index++;
}
else{if(index==1)
    {printf("�������ϰ�(������1),��0,0Ϊ����");index++;}

    scanf("%d,%d",&x,&y);
    if(x==0||y==0)break;
    a[x][y]=1;
}
}
road=find(a,m,n);
print(road);
return 0;
}
