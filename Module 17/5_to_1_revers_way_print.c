// #include<stdio.h>
// void hello(int i)
// {
//     if(i==6) return;
//     hello(i+1);
//     printf("%d\n",i);
// }
// int main()
// {
//     hello(1);
//     return 0;
// }



/// end to start number print

#include<stdio.h>
void hello(int i,int n)
{
    if(i==n+1) return;
    hello(i+1,n);//5 4 3 2 1
    printf("%d\n",i);
}
int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    hello(a,n);
    return 0;
} 