#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       // printf("%d\n",i);  --jodi 10 soho cai
        if(i==10)
        {
            break;
        }

        printf("%d\n",i); //jodi 9 porjonto cai 10 ar age
    }
    return 0;
}
