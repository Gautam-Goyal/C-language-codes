#include <stdio.h>
#include <conio.h>
int count_of_digits(int);
int main()
{
	int number,count=0;
	printf("enter a number");
	scanf("%d",&number);
	count=count_of_digits (number);
	printf("\n No. of digits in a given number are=%d",count);
    return 0;
}
int count_of_digits (int number)
{
	int count;
	while (number>0)
	{
		number=number/10;
		count=count+1;
	}
	return count;
}
