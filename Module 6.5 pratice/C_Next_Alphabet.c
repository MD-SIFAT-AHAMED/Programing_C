// Given a lowercase alphabet character. You have to print the next character in the alphabet.

// Input
// Only one line containing a lowercase English letter C
// .

// Output
// Print the next letter to C
//  in the alphabet.

#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='z')
    {
        printf("a\n");
    }
    else if(a>='a' && a<='z')
    {
        //kaj
        int ans=a+1;
        printf("%c",ans);
    }
    
    return 0;
}