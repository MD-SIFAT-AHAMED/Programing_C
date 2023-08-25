#include<stdio.h>
int main()
{
    int x=30;
    //Derefernce
    int * ptr=&x;
    printf("X ar address -> %p\n",ptr);
    printf("X ar value -> %d\n",*ptr);
    printf("ptr ar address -> %p\n",&ptr);

    *ptr=200;
    printf("Derefernce ar pore x -> %d\n",x);
    printf("ptr ar value -> %d\n",*ptr);
    printf("size of ptr -> %d\n",sizeof(ptr));



    return 0;
}