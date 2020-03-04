#include <stdio.h>
#include <conio.h>
int main()
{
	int i=1,n,t1=0,t2=1,next;
	printf("enter the number of places ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		next=t1+t2;
		t1=t2;
		t2=next;
		i++;
	}	
		printf("%d,",t1);
	return 0;
}
