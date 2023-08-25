// Array index 0 to end porjonto


// #include<stdio.h>
// void hello(int *ar,int n,int i)
// {
//     if(i==n) return;
//     printf("%d\n",ar[i]);
//     hello(ar,n,i+1);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     hello(ar,n,0);
//     return 0;
// }

// Array index end to 0 porjonto

#include<stdio.h>
void hello(int *ar,int n,int i)
{
    if(i==-1) return;
    printf("%d\n",ar[i]);
    hello(ar,n,i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    hello(ar,n,n-1);
    return 0;
}