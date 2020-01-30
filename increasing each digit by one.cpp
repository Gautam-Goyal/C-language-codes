#include <stdio.h>
#include <conio.h>
int count_of_digits(int);
int main()
{
	int i=1,result=0,number,final,count=0;
	printf("enter a number ");
	scanf("%d",&number);
	count=count_of_digits (number);
	while(i<=count)
	{
		result=result*10+1;
		i++;
	}
	final=number+result;
	printf("New number after increment of each digit by one is %d",final);
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
