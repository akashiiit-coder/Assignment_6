#include <stdio.h>
int main()
{
    int t=1;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",t);
            t+=j+1;
        }
        t=1;
        printf("\n");
    }
}