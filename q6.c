#include <stdio.h>
int main()
{char c=70;

for(int i=0;i<=4;i++)
{
c--;
for(int j=5;j>i;j--)
{
printf("%c",c);
}
printf("\n");
}

}
