#include <stdio.h>
#include <conio.h>
int main()
{
	int n,q,r,n1,r1,r2,r3,r4,r5;
	printf("enter a five digit number");
	scanf("%d",&n);
	    q=n/10;
	    r=n%10;
	    r1=r+1;
	    n1=q;
	    q=n1/10;
	    r=n1%10;
	    r2=r+1;
	    n1=q;
	    q=n1/10;
	    r=n1%10;
	    r3=r+1;
	    
	    n1=q;
	    q=n1/10;
	    r=n1%10;
	    r4=r+1;
	    
	    n1=q;
	    q=n1/10;
	    r=n1%10;
	    r5=r+1;
	    n1=q;
	    
	    printf("result is %d%d%d%d%d",r5,r4,r3,r2,r1);
	    
	    
	return 0;
}
