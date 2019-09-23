#include <stdio.h>
int i=1,k=1,t=1;
int loop()
{
    printf("A");
    if (i==k)
    return 0;
    else 
    k++;
    loop();
    return 1;
}
int main()
{
    
    
    //while(t<=n)
    
    k=1;
    loop();
    i=i+t;
    t++;
    printf("\n");
   if(t<=10)
    {
    main();
    }
     return 0;
}