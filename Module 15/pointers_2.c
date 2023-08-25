#include<stdio.h>
int main()
{
    double x=6.345;
    double * sifat=&x;
    printf("x ar address -> %p\n",sifat);
    printf("x ar value -> %.3lf\n",*sifat);
    printf("x ar value -> %p\n",&x);

    double *ptr=sifat;
    *ptr=500.222;
    printf("ptr ar address -> %.3lf\n",*ptr);
    printf("ptr ar address -> %.3lf\n",x);

    return 0;
}