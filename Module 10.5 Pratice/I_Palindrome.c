// //Another easy way to check whether it's palindrome or not

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[1001];
//     scanf("%s", s);
    
//     int is_palindrome = 1;
//     // for(int i = 0, j = strlen(s)-1; i < j; i++, j--) 
//     // {
//     //     if(s[i] != s[j])
//     //     {
//     //         is_palindrome = 0;
//     //         break;
//     //     }
//     // }

//     int i=0,j=strlen(s)-1;
//     while (i<j)
//     {
//         if(s[i]!=s[j])
//         {
//             is_palindrome = 0;
//             break;
//         }
//         int tmp=s[i];
//         s[i]=s[j];
//         s[j]=tmp;
//         i++;
//         j--;
//     }
//     if(is_palindrome == 1)
//     {
//         printf("YES");
//     }
//     else 
//     {
//         printf("NO");
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ar[1002];
//     scanf("%s",ar);
//     int it_palindrome=1;
//     int i=0,j=strlen(ar)-1;
//     while(i<j)
//     {
//         if(ar[i]!=ar[j])
//         {
//             it_palindrome=0;
//             break;
//         }

//         int tmp=ar[i];
//         ar[i]=ar[j];
//         ar[j]=tmp;
//         i++;
//         j--;
//     }
//     if(it_palindrome==1)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[1001];
//     scanf("%s", s);

//     int flag = 0;
//     for(int i = 0, j = strlen(s)-1; i < j; i++, j--) {
//         if(s[i] == s[j]) {
//             //printf("YES");
//             flag++;
//         }
//     }
//     // if(flag > 0) { 
//     //     printf("YES");
//     // }
//     /*Since "deified" has 7 characters, it is an odd-length palindrome.

//   For an odd-length palindrome, the middle character doesn't have a corresponding
//   character to compare with, so we can simply ignore it when we check for
//  palindrome. However, we still need to check if the middle character matches
//   itself. In this case, the middle character is 'i',
//   which is the character at index 3 (counting from 0).*/
   
//    if(flag == strlen(s)/2 || flag == (strlen(s)-1)/2) {
//         printf("YES");
//    }
//    else {
//     printf("NO");
//    }
   
//    return 0;
// }


#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s",s);
    int palindrome=1;
    int i=0,j=strlen(s)-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            palindrome=0;
            break;
        }
        int tmp=s[i];
        s[i]=s[j];
        s[j]=tmp;
        i++;
        j--;
    }
    if(palindrome==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}