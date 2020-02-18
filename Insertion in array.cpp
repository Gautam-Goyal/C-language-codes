#include <stdio.h>
#include <conio.h>
int main()
{
	int i,a[10],n,item,j,k;
	printf("How many no. you want in array\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array enterd by u with their position no. is\n");
	for(i=1;i<=n;i++)
	{
		printf("a[%d] --> %d\n",i,a[i]);
	}
	printf("enter the no. u wanna insert\n");
	scanf("%d",&item);
	printf("enter the position at which want to insert a no.\n");
	scanf("%d",&k);
	j=n;
	while(j>=k)
	{
		a[j+1]=a[j];
		j--;
	}
	a[k]=item;
	n++;
	printf("New aray after insertion with their postion no. is\n");
		for(i=1;i<=n;i++)
	{
		printf("a[%d] --> %d\n",i,a[i]);
	}
	getch();

}
