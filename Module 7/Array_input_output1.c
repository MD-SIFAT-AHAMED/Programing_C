#include<stdio.h>
int main()
{
    int ar[5000];
    //ar[0],ar[1],ar[3].....
    ar[0]=100;
    ar[1]=123;
    ar[2]=400;
    //..........
    printf("%d %d %d",ar[0],ar[1],ar[2]);
    return 0;
}