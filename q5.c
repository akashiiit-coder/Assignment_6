#include <stdio.h>
int main()
{for(int i=0;i<=4;i++)
{char c=64;

for(int j=5;j>i;j--)
{
printf("%c",c+j+i);
}
printf("\n");
}

}
