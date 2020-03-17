#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int *ptr;
	int i,n,m;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	
	ptr = (int*)malloc(n*sizeof(int)); 
	printf("Address of previously allocated memory\n");
	for(i=0;i<n;i++)
	printf("%u\t",ptr+i);
	
	printf("\nEnter new size of array\n");
	scanf("%d",&m);
	ptr=(int*)realloc(ptr,m);
	
	for(i=0;i<m;i++)
	printf("%u\t",ptr+i);
	
	return 0;
}
