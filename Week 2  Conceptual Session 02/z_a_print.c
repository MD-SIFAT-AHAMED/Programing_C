// Write a C program to print all alphabets from z to a. – using while loop


//while loop use kore.

// #include<stdio.h>
// int main()
// {
//     char ch='z';
//     while(ch>='a')
//     {
//         printf("%c\n",ch);
//         ch--;
//     }
//     return 0;
// }


//for loop use kore

#include<stdio.h>
int main()
{
    for(int i=122;i>=97;i--)
    {
        printf("%c\n",i);
    }
    return 0;
} 