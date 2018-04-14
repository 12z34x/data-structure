#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct LindList
{
	float coef;
	int expn;
	struct LindList *next;
}polynomial;
int e=0;
polynomial *CreatPolym(){
    int n=0;
    polynomial *head,*r,*p;
    head=(polynomial *)malloc(sizeof (polynomial));
    r=head;
    p=(polynomial *)malloc(sizeof(polynomial));
    printf("按照升序输入多项式的系数和指数,0,0为结束\n");
        scanf("%f,%d",&p->coef,&p->expn);
    while(p->coef!=0){
        if(n==0)
        {r->next=p;n++;}
    else
    {
        r->next=p;
        r=p;
        p=(polynomial *)malloc(sizeof(polynomial));
        scanf("%f,%d",&p->coef,&p->expn);
    }
    }
       r->next=NULL;
       free(p);
  return(head);
}
polynomial *cheng(polynomial *Pa,polynomial *Pb){
    int m=0;
    polynomial *a,*b;
    polynomial *head,*c,*r;
    head=(polynomial *)malloc(sizeof (polynomial));
    r=head;
    a=Pa->next;
    c=(polynomial *)malloc(sizeof(polynomial));
    c->next=NULL;
while(a!=NULL){
              b=Pb->next;
        while(b!=NULL)
       {
           c->coef=(a->coef)*(b->coef);
           c->expn=a->expn+b->expn;
           r->next=c;
           r=r->next;
           b=b->next;
            c=(polynomial *)malloc(sizeof(polynomial));
       }
       a=a->next;
    }
    r->next=NULL;
    free(c);
    return(head);
}
void show(polynomial *head){
    int m=0;
    polynomial *p;
    p=head->next;
    printf("第%d个多项式为\n",e+1);
    while(p!=NULL){
        if(m!=0) printf("+");
        printf("%0.2fx^%d",p->coef,p->expn);
        p=p->next;
        m++;
}
    e++;
    printf("\n");
    free(p);
}
void print(polynomial *Pc){
    polynomial *p,*q,*z,*w;
    int t=0,m=0;
    float h=0;
    p=Pc->next;
    z=p;
    q=z->next;
    show(Pc);
    while(p->next!=NULL)
    {
        while(q!=NULL){
            if(q->expn<p->expn){
                t=p->expn;
                p->expn=q->expn;
                q->expn=t;
                h=p->coef;
                p->coef=q->coef;
                q->coef=h;
                z=z->next;
                q=z->next;
            }
            else if(q->expn==p->expn){
            p->coef=q->coef+p->coef;
            z->next=q->next;
            q=z->next;}
            else{z=z->next;
                q=z->next;}
        }
        p=p->next;
    }
    printf("结果为");
    w=Pc->next;
    while(w!=NULL){
        if(m!=0) printf("+");
        printf("%0.2fx^%d",w->coef,w->expn);
        w=w->next;
        m++;
    }
}
void main(){
    polynomial *A;
    polynomial *B;
    polynomial *C;
    A=CreatPolym();
    B=CreatPolym();
    C=cheng(A,B);
    show(A);
    show(B);
    show(C);
    print(C);
}
