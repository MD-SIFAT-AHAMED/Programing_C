// //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

// // #include<stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);
// //     int A[n];
// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",&A[i]);
// //     }
// //    for(int i=0;i<n;i++)
// //    {
// //     if(A[i]<=10)
// //     {
// //         printf("A[%d] = %d\n",i,A[i]);
// //     }
// //    }
    
// // }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int test;
//     scanf("%d",&test);
//     for(int i=1;i<=test;i++)
//     {
//         int n;
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     int v;
//     scanf("%d",&v);
//     int pos;
//    for(int i=0;i<n;i++)
//    {
//     if(ar[i]=v)
//     {
//         pos=i;
//     }
//    }    
//     if(pos>0)
//     {
//         printf("Case %d: %d\n",i,pos);
//     }
//     else if(pos==0)
//     {
//         printf("Case %d: Not Found",i);
//     }
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // for(int j=1;j<=n;j++)
        // {
        //     printf(" ");
        // }
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}