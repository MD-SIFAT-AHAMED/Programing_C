#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    //double a;
    //scanf("%lf",&a);
    
    // int ans=ceil(a); //ja man ase tar oporer value dibe
   
    //int ans=floor(a); //ja man ase tar nicer value dibe
    
    //int ans=round(a); //jodi .5 thake tar oporer value dibe - jodi point .4 thake micer value dibe
   

    // double a ;
    // scanf("%lf",&a);
    // double ans=sqrt(a);
    // printf("%.2lf",ans);

    // double a,b ;
    // scanf("%lf %lf",&a,&b);
    // int ans = pow(a*1.0,b*1.0);
    // printf("%d",ans);


    int a;
    scanf("%d",&a);
    int ans = abs(a); // positive ke positive kore and negative keo positive kore
    printf("%d",ans);

    return 0;
}