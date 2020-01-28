#include <stdio.h>
#include <conio.h>
main()
{
	clrscr();
	int a[12],i,n,item,flag=0,j;
	char c;
	printf("enter how many items you want to feed");
	scanf("%d",&n);
	printf("enter the items one by one");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	   printf("%d\n",a[i]);
	}
	printf("enter the item you want to search");
	scanf("%d",&item);
	printf("you want to search %d Y/N",item);
	scanf("%c",&c);
	clrscr();
	if(c==Y||j==1)
	{
		for(i=0;i<n;i++)
		{
			if(item==a[i])
			{
			    printf("item find at location %d",i);
			    break;
		    }
			else
			{
			    printf("no found");
		    }
		}
	}
	else
	{
	    printf("To try again press 1 and to exit press 2");
	    scanf("%d",&j);
		switch(j)
		{
		case'1'
	    printf("enter the item you want to search");
	    scanf("%d",&item);
	    printf("you want to search %d Y/N",item);
	    scanf("%c",&c);
	    
		
	    
	    
	}
}
printf("see ya");
	
