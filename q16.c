#include <stdio.h>
int main()
{
    char c=65; int d=0,k=1;;
    for(int i=0;i<=5;i++)
{
d=0;
for(int j=6;j>i;j--)
{
printf("%c",c+d);
d=d+k;
}
k++;
printf("\n");
}

}
