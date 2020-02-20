#include <stdio.h>
#include <conio.h>
int main()
{
	int a[10] ={1,2,3,4,5,6,7,8,9},i;
	int lengthofarray=sizeof(a)/sizeof(int);
	printf("length of array is : %d\n",lengthofarray);
	for (i=0;i<lengthofarray;i++)
	{
		printf("array element at index [%d]=%d\n",i,a[i]);
	}
	return 0;

}
