#include <stdio.h>
int main()
{
    char c=65,C=97;
    for(int i=0;i<6;i++)
    {
        for(int k=0;k<=i;k++)
        printf("%c",c+k);
        for(int j=5;j>=1+i;j--)  
            printf("%C",C+5-j);
        printf("\n");
    }
}