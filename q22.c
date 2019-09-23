#include <stdio.h>
int c=65,i=1,j=1,t=0;
int loop()
{
    printf("%c",c++);
    if (j<i)
    {
       j++;
       loop();
    }
    return 0;
}
int main()
{
    j=1;
    loop();
    printf("\n");
    t++;
    i+=t;
    c=65+t;
    if(t<5)
    main();
}
