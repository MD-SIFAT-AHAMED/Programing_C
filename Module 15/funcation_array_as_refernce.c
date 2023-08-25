//Array ar khetre


// #include<stdio.h>
// void fun(int * ar,int n)
// {
//     //Derefernce
//     *ar=400;
// }
// int main()
// {
//     int sifat[4]={10,20,30,40};
//     fun(sifat,4);
//     for(int i=0;i<4;i++)
//     {
//         printf("%d ",sifat[i]);
//     }

//     return 0;
// }



//string ar khetre

#include<stdio.h>
void fun(char * ar)
{
    *ar='S';
}
int main()
{
    char sifat[6]="sifat";
    fun(sifat);
    printf("%s",sifat);
    return 0;
}

