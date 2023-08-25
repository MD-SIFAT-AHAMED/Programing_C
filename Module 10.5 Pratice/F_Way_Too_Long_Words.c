// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int test;
//     scanf("%d",&test);
//     for(int i=0;i<test;i++)
//     {
//         char ar[102];
//         scanf("%s",ar);
//         int size=strlen(ar);
//         if(size>10)
//         {
//             printf("%c%d%c\n",ar[0],size-2,ar[size-1]);
//         }
//         else
//         {
//             printf("%s\n",ar);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        char ar[102];
        scanf("%s",ar);
        int size=strlen(ar);
        if(size>10)
        {
            printf("%c%d%c\n",ar[0],size-2,ar[size-1]);
        }
        else 
        {
            printf("%s\n",ar);
        }
    }
    return 0;
}