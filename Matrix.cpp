#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,r,c,a[10][10];
	printf("enter the order of matrix\n");
	scanf("%d%d",&r,&c);
	printf("enter the elements of matrix one by one\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix entered by u is\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	getch();
	return 0;
}
