#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i=2;
	printf("enter any number n \n");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("number is non prime");
			break;
		}
		i++;
	}
	if(n==i)
	{
		printf("number is prime");
	}
	return 0;
}
