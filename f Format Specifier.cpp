#include <stdio.h>
#include <conio.h>
int main()
{
    float c=234.3254;
    printf("result is %f <-- this\n",c);
    printf("result is %10.2f %10.2f <-- this\n",c,69.256);
    printf("result is %.3f <-- this\n",c);
    printf("result is %3f <-- this\n",c);
    printf("result is %-3f <-- this\n",c);
    printf("result is %-10.3f %12.2f %18.3f %-15.3f <-- this\n",c,565.446,63.4842,483.6554);
} 
