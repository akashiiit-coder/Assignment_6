#include <stdio.h>
int main()
{char c=70;
	for(int i=1;i<=5;i++)
{
c--;
for(int j=0;j<=5-i;j++)
{
printf("%c",c+j);
}
printf("\n");
}

}
