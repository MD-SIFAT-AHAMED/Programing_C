///Function call by refernce / Pass by refernce


#include<stdio.h>
void fun(int * p)
{
    printf("p ar value -> %p\n",p);
    *p=50;
}
int main()
{
    int x=10;
    printf("x ar address -> %p\n",&x);
    fun(&x); //address pass kore diche function a
    printf("%d\n",x);   
    return 0;
}