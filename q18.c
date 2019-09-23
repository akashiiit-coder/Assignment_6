#include <stdio.h>
int main()
{
    int c=65,f=c;
    for (int i=1;i<=5;i++)
    {
        for(int j=4;j>=i;j--)
        printf(" ");
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%c",c);
            if(j<i)
            c++;
            else 
            c--;
        }
        c=65;
        printf("\n");
    }
}