// Given a number N. Print all the divisors of N in ascending order.

// Input
// Only one line containing a number N (1 ≤ N ≤ 104).

// Output
// Print all positive divisors of N, one number per line.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if((a%i)==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

// #include <stdio.h>
// int main() {
// 	int x, i;
// 	scanf("%d", &x);
// 	for(i = 1; i <= x; i++) {
// 		if((x%i) == 0){
// 			printf("\n%d", i);
// 		}
// 	}
	
// 	return 0;
// }
