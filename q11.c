#include <stdio.h>
int main()
{
    char c=65;
    for(int i=0;i<6;i++)
    {
        for(int k=0;k<i;k++)
        printf(" ");
        for(int j=6-i;j>0;j--)  
            printf("%c",c++);
        printf("\n");
        c-=5-i;
    }
}