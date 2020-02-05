#include <stdio.h>
#include <conio.h>
int main()
{
	int i,a[i],n,item,flag=0;
	char ans,again,EXIN;
	printf("How many Numbers you want to display\n");
	scanf("%d",&n);
	printf("ok! enter the numbers one by one\n");
	for(i=1;i<=n;i++)
	{
	   scanf("%d",&a[i]);
    }
    printf("Numbers entered by u are\n");
    for(i=1;i<=n;i++)
    {
    	printf("%d\n",a[i]);
	}
	do
	{
	    printf("Enter the item u want to search\n");
	    scanf("%d",&item);
	    printf("You want to search %d Y/N\n",item);
	    scanf(" %c",&ans);
	    if(ans=='Y')
	    {
	    	for(i=1;i<=n;i++)
		    {
			    if(item==a[i])
		       {
			     flag=1;
			     break;
			    }
			}
			    if(flag==1)
			    {
			    	printf("Your item is found at location %d",i);
			    	printf("Press X to try again and E to exit");
			    scanf(" %c",&again);
				}
				else
			    {
			    printf("Your item not found.Press X to try again and E to exit");
			    scanf(" %c",&again);
			    }
		    
        }
    }
		while(again=='X');
	
        if(ans=='N')
        {
        	printf("To enter new number press I else E to exit");
        	scanf(" %c",&EXIN);
        	switch(EXIN)
        	{
        	case 'I':
        		do
				{
				
        		printf("Enter new number");
        		scanf(" %d",&item);
        		for(i=1;i<=n;i++)
		    {
			    if(item==a[i])
		       {
			     flag=1;
			     break;
			    }
			}
			    if(flag==1)
			    {
			    	printf("Your item is found at location %d",i);
			    	printf("Press X to try again and E to exit");
			    scanf(" %c",&again);
				}
				else
			    {
			    printf("Your item not found.Press X to try again and E to exit");
			    scanf(" %c",&again);
			    } 
				}while(again=='X');
			    break;
		    case 'E':
			break;   
			default :
			printf("bye!");
            }
}
		return 0;
}
