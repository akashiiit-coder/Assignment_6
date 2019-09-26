#include <stdio.h>
int main()
{
    int t=4,t1=8;
    for(int i=1;i<=7;i++)
    {
        for(int j=0;j<t1;j++)
        {
            printf("%d,",t*j);
        }
        if (t1>4)
        t1--;
        t++;
        printf("\n");
    }
}