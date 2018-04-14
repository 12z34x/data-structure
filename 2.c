#include<stdio.h>
int main()
{
    double fun(double x,double y);
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%lf",fun(a,b));
    return 0;
}
double fun(double x,double y)
{
    double num;
    num=x*x-y*y;
    if(num<0)
        num=(-1)*num;
    return(num);
}
