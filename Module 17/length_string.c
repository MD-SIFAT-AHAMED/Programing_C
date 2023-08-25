#include<stdio.h>
int hello(char*ar,int i)
{
    if(ar[i]=='\0') return 0;
    int l=hello(ar,i+1);
    return l+1;
}
int main()
{
   char ar[6]="hello";
   int length=hello(ar,0);
   printf("%d",length);

    return 0;
}