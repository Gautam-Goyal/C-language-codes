#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,r,c,a[10][10],b[10][10];
	printf("enter the order of matrices\n");
	scanf("%d%d",&r,&c);
	printf("enter the elements of 1st matrix one by one\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" 1st matrix entered by u is\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
		printf("enter the elements of 2nd matrix one by one\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf(" 2nd matrix entered by u is\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n\n");
	}
	printf("Sum of both matrix is:\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d\t",(a[i][j]+b[i][j]));
		}
		printf("\n\n");
	}
	getch();
	return 0;
}
