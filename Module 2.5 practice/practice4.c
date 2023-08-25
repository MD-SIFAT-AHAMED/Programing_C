// You need to take one integer value as input and tell if the value is positive or negative or zero.
// See the sample input and output for more clarification.


#include<stdio.h>
int main()
{   
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is Positive");
    }
    else if(num<0)
    {
        printf("Number is Negetive");
    }
    else
    {
        printf("Number is Zero");
    }
    return 0;
}