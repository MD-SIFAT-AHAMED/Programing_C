#include<stdio.h>
#include<string.h>
int main()
{
    char a[22],b[22];
    scanf("%s %s",a,b);
    int value=strcmp(a,b);
    if(value>0)
    {
        printf("%s",b);
    }
    else if(value<0)
    {
        printf("%s",a);
    }
    else if(value==0)
    {
        printf("%s",a);
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     char a[22],b[22];
//     scanf("%s %s",a,b);
//     int i=0;
//     while(1)
//     {
//         if(a[i]=='\0' && b[i]=='\0')
//         {
//             printf("%s",a);
//             break;
//         }
//         else if(a[i]<b[i])
//         {
//             printf("%s",a);
//             break;
//         }
//         else if(a[i]>b[i])
//         {
//             printf("%s",b);
//             break;
//         }
//         if(a[i]==b[i])
//         {
//             i++;
//         }
//         else if(a[i]>b[i])
//         {
//             printf("%s",b);
//             break;
//         }
//         else 
//         {
//             printf("%s",a);
//         }
//     }

//     return 0;
// }
