#include <stdio.h>
#include <conio.h>
int rec(int);
int main()
{
	int n,sum;
	printf("Enter any number ");
	scanf("%d",&n);
	
	sum=rec(n);
	printf("Sum of individual digits is %d",sum);
	return 0;
}


int rec(int x)
{
	int S;
	
	if(x==0)
	{
		return 0;
	}
	else
	{
	return(x%10+rec(x/10));
	}
}




