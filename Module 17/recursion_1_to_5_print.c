// #include<stdio.h>
// void sifat(int i)
// {
//     if(i==6) return;
//     printf("%d\n",i);
//     sifat(i+1);
// }
// int main()
// {
//     sifat(1);
//     return 0;
// }


/// icca to icca moto porjonto print 

#include<stdio.h>
void fun(int i,int n)
{
    if(i==n+1) return;
    printf("%d\n",i);
    fun(i+1,n);
}
int main()
{ 
    int a,n;// jmn 5 to 10
    scanf("%d %d",&a,&n);
    fun(a,n);
    return 0;
}