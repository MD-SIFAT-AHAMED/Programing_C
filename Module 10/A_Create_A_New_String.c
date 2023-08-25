//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s",s,t);
    int st=strlen(s);
    int ste=strlen(t);
    printf("%d %d\n",st,ste);
    printf("%s %s\n",s,t);
    return 0;
}