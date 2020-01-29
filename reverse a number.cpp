#include <stdio.h>
#include <conio.h>
main()
{
	int n1,n,q,r,rev=0;
	printf("enter any three digit number ");
	scanf("%d",n);
	n1=n;
	q=n/10;
	r=n%10;
	//rev=rev*10+r;
	printf("%d",r);
	n=q;
	
	q=n/10;
	r=n%10;
	//rev=rev*10+r;
	printf("%d",r);
	n=q;
	
	q=n/10;
	r=n%10;
	//rev=rev*10+r;
	printf("%d",r);
	n=q;
	
//	printf("therefore reverse of no. n %d is %d",n1,rev);
	
	getch();
}
