#include <stdio.h>
int main()
{
    int k=6,c=65,f=c;
    for (int i=1;i<=6;i++)
    {
        for(int j=1;j<=k;j++)
        {
            for(int k=1;k<=i;k++)
            {
                printf("%c",f);
            }
            f++;
        }
        f=++c;
        k--;
        printf("\n");
    }
}