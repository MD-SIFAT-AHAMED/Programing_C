#include<stdio.h>
void fun(int * p,int n)// array <- a[] -> o declear kora jay , array muloto pointer ar moto kaj kore
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}
int main()
{
    int ar[5]={10,20,30,40,50};
    fun(ar,5);// array pass korar somoy size o pass kore hoy
    
    return 0;
}