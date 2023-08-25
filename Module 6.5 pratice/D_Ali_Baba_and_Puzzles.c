// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     scanf("%d %d %d %d",&a,&b,&c,&d);

//     if(a+b*c==d)
//     {
//         printf("YES");
//     }
//     else if(a+b-c==d)
//     {
//         printf("YES");
//     }
//     else if(a-b+c==d)
//     {
//         printf("YES");
//     }
//     else if(a-b*c==d)
//     {
//         printf("YES");
//     }
//     else if (a*b+c==d) 
//     {
//         printf("YES");
//     }
//     else if(a*b-c==d)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }


#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a+b*c==d || a+b-c==d || a-b*c==d || a-b+c==d || a*b+c==d || a*b-c==d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}