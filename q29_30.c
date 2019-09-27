#include <stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int t1;
    int t2;
    int t3;
    for(i=1;i<=6;i++)
    {
        t1=a;
        t2=b;
        printf("(%d)(%d)",t1,t2);
        for(j=1;j<i;j++)
        {
            t3=t1+t2;
            t1=t2;
            t2=t3;
            printf("(%d)",t3);

        }
        printf("\n");
    }
    
}