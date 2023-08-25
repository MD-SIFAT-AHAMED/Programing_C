// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ar[10000001];
//     scanf("%s",ar);
//     int count[26]={0};
//     for(int i=0;i<strlen(ar);i++)
//     {
//         char value=ar[i]-97;
//         count[value]++;
//     }
//     for(int i=0;i<26;i++)
//     {
//         if(count[i]!=0)
//         {
//             printf("%c : %d\n",i+97,count[i]);
//         }
//     }
//     return 0;
// }

//time limite chara

#include<stdio.h>
#include<string.h>
int main()
{
    
   int ar[26]={0};
    char ch;
    
    while(scanf("%c",&ch)!=EOF)
    {
        ar[ch-'a']++;
        
    }
    for(char i='a';i<='z';i++)
    {
        if(ar[i-'a']!=0)
        {
            printf("%c : %d\n",i,ar[i-97]);
        }
    }
    
    return 0;
}