//gets

#include<stdio.h>
#include<string.h>//gets ar jonne
int main()
{
    char a[15];
    gets(a);
    printf("%s",a);
    return 0;
}


//fgets
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[16];
//     fgets(a,17,stdin);
//     printf("%s",a);

//     return 0;
// }