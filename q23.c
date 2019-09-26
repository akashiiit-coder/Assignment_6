#include <stdio.h>
int main()
{
    int c=85;
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=i;j++)
            printf("%c",c++);
        c-=3+2*i;
        printf("\n");
    }
}