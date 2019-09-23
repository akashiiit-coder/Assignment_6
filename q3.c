#include <stdio.h>
int main(){
char c=64;
for(int i=1;i<=5;i++)
{
c++;
for(int j=5;j>=i;j--)
{
printf("%c",c);
}
printf("\n");
}

}
