#include <stdio.h>
#include <conio.h>
int main()
{
	int a[10][10],b[10][10],d[10][10],r1,r2,s,c1,c2,k,i,j;
	printf("enter the order (row,column) of matrix 1\n");
	scanf("%d%d",&r1,&c1);
	printf("enter the elements for matrix 1 one by one\n");
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			scanf("%d",&a[i][j]); 
		}
	}
	printf("the matrix 1 entered by u is\n");
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("enter the order (row,column) of matrix 2\n");
	scanf("%d%d",&r2,&c2);
	printf("enter the elements for matrix 2 one by one\n");
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the matrix 2 entered by u is\n");
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n\n");
	}

	if(c1==r2)
	{
		printf("the product of matrix 1 and 2 is\n");
  	for(i=1;i<=r1;i++)
	{
	
		for(j=1;j<=c2;j++)
		{
			s=0;
			for(k=1;k<=r2;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			d[i][j]=s;
			printf("%d\t",d[i][j]);
		}
		printf("\n\n");
	}
    }
    else
    printf("Multiplication not posiible");
	getch();
}
