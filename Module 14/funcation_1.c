// //Retuen_type + parameter

// #include<stdio.h>

// // Reruen_type name (parameter)
// // {
// //     code
// //     return what?
// // }
// int sum(int x,int y) //x=10 y=20
// {
//     int sum=x+y;
//     return sum;
// }

// int main()
// {
//     // int s=sum(10,20);
//     // printf("%d",s);
//     printf("%d",sum(10,20));
//     return 0;
// }



#include<stdio.h>
int gun(int a,int b)
{
    int gun=a*b;
    return gun;
}
int main()
{
   // int s=gun(10,20);
  //printf("%d",s);
    printf("%d\n",gun(10,20));
    printf("%d\n",gun(10,30));
    printf("%d\n",gun(10,40));
    return 0;
}