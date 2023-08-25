#include<stdio.h>
int main()
{   
    int love;
    scanf("%d",&love);
    if (love >= 100)
    {
        printf(" i love you");
    }
    else if(love >= 20)
    {
        printf("45%%love you");
    }
    else if(love >= 10)
    {
        printf("poor love");
    }
    else
    {
        printf("sorry");
    }
    return 0;
}