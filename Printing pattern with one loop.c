#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int i,j=0,n;
   scanf("%d",&n);
   for(i=1;i<=n;)
   {
     if(j<i)
    {
        printf("*");
        j++;
        continue;
    }
    else
    {
        printf("\n");
        i++;
        j=0;
    }
    }
return 0;
}
