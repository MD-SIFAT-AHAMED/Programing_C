#include<stdio.h>
#include<string.h>
void fun(char *ar)
{
    int size=strlen(ar);
    printf("%d",size);
    char n[]="sifat";
    return n;// ai khane kono list return kora jabe nah
}
int main()
{
    char a[20]="hello";
    fun(a);
    return 0;
}