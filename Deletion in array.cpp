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
	printf("enter the no. u wanna delete\n");
	scanf("%d",&item);
	for(i=1;i<=n;i++)
	{
		if(item==a[i])
		break;
	}
	k=i;
	while(k<n)
	{
	    a[k]=a[k+1];
	    k++;
	}
	n--;
		printf("New aray after deletion with their postion no. is\n");
		for(i=1;i<=n;i++)
	{
		printf("a[%d] --> %d\n",i,a[i]);
	}
	getch();
//VUP
}
