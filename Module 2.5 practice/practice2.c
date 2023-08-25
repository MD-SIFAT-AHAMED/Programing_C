
// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50




// #include<stdio.h>
// int main()
// {   
//     int a,b,sum,sub,mul;
//     float div;
//     scanf("%d %d",&a,&b);

//     sum= a+b;
//     mul=a*b;
//     sub=a-b;
//     div=a*1.0/b;

//     printf("%d\n",sum);
//     printf("%d\n",mul);
//     printf("%d\n",sub);
//     printf("%0.2f",div);
//     return 0;
// }



#include<stdio.h>
int main()
{   
    int a,b,sum,sub,mul;
    float div;
    scanf("%d %d",&a,&b);

    sum= a+b;
    mul=a*b;
    sub=a-b;
    div=a*1.0/b;

    printf("%d\n%d\n%d\n%0.2f",sum,mul,sub,div);
    return 0;
}

