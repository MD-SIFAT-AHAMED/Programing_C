#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=INT_MAX,max=INT_MIN,min_index,max_index;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            min_index=i;
            
        }
        if(ar[i]>max)
        {
            max=ar[i];
            max_index=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        ar[min_index]=max;
        ar[max_index]=min;
        printf("%d ",ar[i]);
    }
    return 0;
}