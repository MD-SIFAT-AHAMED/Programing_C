// //No-Retuen_type + parameter


// #include<stdio.h>
// void sum(int x,int y)
// {
//     int s=x+y;
//     printf("%d",s);
//     return;
// }
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     sum(a,b);
//     return 0;
// }


#include<stdio.h>
void app(int a,int b)
{
    int s=a-b;
    printf("%d",s);
    return;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    app(a,b);    
    return 0;
}