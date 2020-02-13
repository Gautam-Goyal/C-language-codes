#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2 == 1)
			printf("%d",i);
			else
			printf("0");
		}
		printf("\n");
	}
	return 0;
}
