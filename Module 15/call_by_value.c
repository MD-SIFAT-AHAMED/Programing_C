///Function call by value / Pass by value


#include<stdio.h>
void fun (int x)
{
    x=300;
    printf("fun ar x value -> %d\n",x);
    printf("fun ar x address -> %p\n",&x);
}
int main()
{
    int x=100;
    fun(x);//value pass kore diche function a
    printf("Main ar x value -> %d\n",x);
    printf("Main ar x address -> %p\n",&x);
    return 0;
}