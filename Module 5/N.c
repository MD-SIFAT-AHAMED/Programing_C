// outputstandard output
// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

// Input
// Only one line containing a character X which will be a capital or small letter.

// Output
// Print the answer to this problem.



// tips 1


// #include<stdio.h>
// int main()
// {
//     char a;
//     scanf("%c",&a);
//     if(a>=97 && a<=122)
//     {   
//         //choto hater jonno
//         int ans=a-32;
//         printf("%c",ans);
//     }
//     else
//     {
//         //Boro hater jonno
//         int ans=a+32;
//         printf("%c",ans);
//     }
//     return 0;
// }




//tips 2


 #include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {   
        //choto hater jonno
        int ans=a-32;
        printf("%c",ans);
    }
    else
    {
        //Boro hater jonno
        int ans=a+32;
        printf("%c",ans);
    }
    return 0;
}

