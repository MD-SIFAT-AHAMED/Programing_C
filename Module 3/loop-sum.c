// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }


//  1-n porjonto jugfol

#include<stdio.h>
int main()
{
    long long int sum=0;
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%lld",sum);
    return 0;
}