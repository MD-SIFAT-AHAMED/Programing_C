#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char ar[a];
    scanf("%s",ar);
    int sum=0;
    for(int i=0;i<a;i++)
    {
        sum+=ar[i]-48;
    }
    printf("%d",sum);
    return 0;
}