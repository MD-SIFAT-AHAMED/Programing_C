#include<stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    printf("0th index ar value -> %d\n",*ar);
    printf("0th index ar address -> %p\n",&ar[0]);
    printf("0th index ar address -> %p\n\n",ar);

    printf("1th index ar address -> %p\n",&ar[1]);
    printf("1th index ar value -> %d\n",*(ar+1));


    printf("%d\n",*(ar+1));
    printf("%d\n",*(1+ar));
    printf("%d\n",1[ar]);
    printf("%d\n",ar[1]);
        




    return 0;
}