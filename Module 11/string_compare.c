// #include<stdio.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);
//     int i=0;
//     while(1)
//     {
//         if(a[i]=='\0' && b[i]=='\0')
//         {
//             printf("Same\n");
//             break;
//         }
//         else if(a[i] == '\0')
//         {
//             printf("A is small");
//             break;
//         }
//         else if(b[i] == '\n')
//         {
//             printf("B is small");
//             break;
//         }
        
//         if(a[i]==b[i])
//         {
//             i++;
//         }
//         else if(a[i]<b[i])
//         {
//             printf("A is small");
//             break;
//         }
//         else
//         {
//             printf("B is small");
//             break;
//         }

//     }

//     return 0;
// }



// building funcation
#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v= strcmp(a,b);
    if(v<0)
    {
        printf("A is smaller\n");
    }
    else if(v>0)
    {
        printf("B is smaller\n");
    }
    else
    {
        printf("same\n");
    }

    return 0;
}