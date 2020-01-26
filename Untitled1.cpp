#include <stdio.h>
#include <conio.h>
int main()
{
	int a=13,*b;
	b=&a;
	printf("value of a=%d\n",a);
	printf("address of a=%u\n",*a);
	return 0;
}
