// #include<stdio.h>
// int main()
// {
//     int n,k=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         k++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,k;
//     scanf("%d ",&n);
//     k=n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         k--;
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int k=n;
//     for(int i=1;i<=n;i++)
//     {
//        for(int j=1;j<=k;j++)
//        {
//          printf("*");
//        }
//        k--;
//        printf("\n");
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
        printf("*");
      }
      printf("\n");
      k--;
    }
    return 0;
}