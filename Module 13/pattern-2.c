// #include<stdio.h>
// int main()
// {
//     int n,s,k;
//     scanf("%d",&n);
//     s=n-1;
//     k=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         s--;
//         k=k+2;
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,k,s;
//     scanf("%d",&n);
//     k=1;
//     s=n-1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//        for(int j=1;j<=k;j++)
//        {
//          printf("*");
//        }
//        k+=2;
//        s--;
//        printf("\n");
//     }
//     return 0;

// }


// #include<stdio.h>
// int main()
// {
//     int n,s,k;
//     scanf("%d",&n);
//     s=0;
//     k=(2*n)-1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         s++;
//         k-=2;
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n,k=1,s;
//     scanf("%d",&n);
//     s=n-1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         s--;
//         k+=2;
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=0;
    k=(2*n)-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
        k-=2;
    }
    return 0;
}