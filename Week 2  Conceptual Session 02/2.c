// You will be given a positive integer N and N numbers after that. You need to tell the sum of divisible by 2 numbers and the sum of divisible by 3 numbers separated by a space.

// 	5
//          15 3 4 7 2
	
// 	Output : 
// 	6 18




#include<stdio.h>
int main()
{
    int n,div_1=0,div_2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0)
        {
            div_1+=a;
        }
        else if(a%3==0)
        {
            div_2+=a;
        }
    }
     printf("%d %d\n",div_1,div_2);
    return 0;
}