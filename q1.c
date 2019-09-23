#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
{
    char c=64;

for(int j=5;j>=i;j--)
{
    printf("%c",++c);
}
    printf("\n");
}

}
