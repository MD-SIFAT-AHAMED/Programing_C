// #include<stdio.h>
// int main()
// {
//     int n,k=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//         k++;
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,s,k=1;
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
//             printf("%d ",j);
//         }
//         printf("\n");
//         k+=2;
//         s--;
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}