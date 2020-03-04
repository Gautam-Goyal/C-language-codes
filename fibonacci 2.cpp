#include <stdio.h>
#include <conio.h>
int main()
{
	int p,n,i,f[50];
	printf("enter the no. of places ");
	scanf("%d",&p);
	printf("enter the number whose position u want to know");
	scanf("%d",&n);
	f[0]=0;
	f[1]=1;
	printf("%d,%d,",f[0],f[1]);
	for(i=2;i<p;i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		printf("%d,",f[i]);
	}	
	for(i=0;i<p;i++)
	{
		if(f[i]==n)
		break;
	}
	if(f[i]==n)
	printf("\nNumber found at position %d",i+1);
	else
	printf("\nu entered wrong no. or this number is not in this region");
	
	return 0;
}
