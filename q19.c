#include <stdio.h>
int main()
{
    int c=70,f=c;
    for (int i=1;i<=6;i++)
    {
        for(int j=5;j>=i;j--)
        printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf("%c",c++);
        }
        c=c-i-1; 
        printf("\n");
    }
}