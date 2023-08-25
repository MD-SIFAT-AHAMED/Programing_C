#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int count[100000+1]={0};
    for(int i=0;i<n;i++)
    {
        //int value=ar[i];
        count[ar[i]]++;
            //value
    }
    for(int i=1;i<m+1;i++)
    {
        printf("%d\n",count[i]);
    }
    return 0;
}