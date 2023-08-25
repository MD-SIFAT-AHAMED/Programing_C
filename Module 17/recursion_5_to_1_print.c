// #include<stdio.h>
// void fun(int i)
// {
//     if(i==0) return;
//     printf("%d\n",i);
//     fun(i-1);
// }
// int main()
// {
//     fun(5);
//     return 0;
// }


/// icca to icca moto porjonto print 

#include<stdio.h>
void fun(int i,int n)
{
    if(i==n-1) return;//jmn 10 to -5 porjonto
    printf("%d\n",i);
    fun(i-1,n);
}
int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    fun(a,n);
    return 0;
}