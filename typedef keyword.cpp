/*Learning about "typedef" keyword which can be used to give new name to a data type like to int,char etc.*/
#include <stdio.h>
#include <conio.h>
int main()
{
	typedef int length; //New name can be in uppercase or lowercase too.
	length x,y; /*now x,y are assigned as integers as length is only a name given to a datatype and it will also behave as a 
	            integer datatype.*/
	printf("Enter numbers x and y\n");
	scanf("%d%d",&x,&y);
	printf("x=%d , y=%d",x,y);
}
