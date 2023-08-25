// //Retuen_type + No-parameter
// #include<stdio.h>
// int sum()//void chara
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int s=a+b;
//     return s;
// }
// int main()
// {
//     int s=sum();
//     printf("%d",s);
//     return 0;
// }


#include<stdio.h>
int app()// (void) bitore void dile main a jodi input pay error dibe. void na dile skip korbe than output dibe
{
    int a,b;
    scanf("%d %d",&a,&b);
    int app=a/b;
    return app;
}
int main()
{
    int s=app();
    printf("%d",s);
    return 0;
}