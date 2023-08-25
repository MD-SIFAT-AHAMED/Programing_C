// #include<stdio.h>
// #include<stdio.h>
// int main()
// {
//     char a[200],b[100];
//     scanf("%s %s",a,b);
//     int k=strlen(a);
//     for(int i=0;i<=strlen(b);i++)
//     {
//         a[k]=b[i];
//         k++;
//     }
//     printf("%s %s",a,b);
//     return 0;
// }


// building funcation

#include<stdio.h>
#include<stdio.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s %s",a ,b);
    return 0;
}