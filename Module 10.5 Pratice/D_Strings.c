#include<stdio.h>
#include<string.h>
int main()
{
    char ar1[12];
    scanf("%s",ar1);
    char ar2[12];
    scanf("%s",ar2);
    int length1=strlen(ar1);
    int length2=strlen(ar2);
    printf("%d %d\n%s%s\n",length1,length2,ar1,ar2);
    int tmp=ar1[0];
    ar1[0]=ar2[0];
    ar2[0]=tmp;
    printf("%s %s",ar1,ar2);
    return 0;
}