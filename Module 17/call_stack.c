#include<stdio.h>
void fun()
{
    printf("Fun start\n");//3rd
    printf("Fun end\n");//4th
}
void hello()
{
    printf("Hello start\n");//2nd
    fun();
    printf("Hello end\n");//5th
}
int main()
{
    printf("Main start\n");//1st start
    hello();
    printf("Main end\n");//6th end
    return 0;
}
