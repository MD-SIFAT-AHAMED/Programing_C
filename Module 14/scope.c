#include<stdio.h>
//Global 
int a=10;// aitar access program ar je kono jayga theke neoa jabe
void add (void)
{
    int x=100; // aitar access program ar function a neoa jabe
    printf("%d\n",x);
    printf("Void ar address x-> %p\n",&x);

    
}
int main()
{
    int x=200; // aitar access program ar main a neoa jabe
    printf("%d\n",x);
    printf("Main ar address x-> %p\n",&x);
    add();
    return 0;
}