#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100001];
    scanf("%s",ar);
    for(int i=0;i<strlen(ar);i++)
    {
        if(ar[i]>='a' && ar[i]<='z')
        {
             ar[i]=ar[i]-32;
        }
        else if(ar[i]>='A' && ar[i]<='Z')
        {
            ar[i]=ar[i]+32;
        }
        else if(ar[i]==',')
        {
            ar[i]=ar[i]=' ';
        }
         printf("%c",ar[i]);
    }
    
    return 0;
}