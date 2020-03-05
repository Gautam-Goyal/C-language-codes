#include <stdio.h>
#include <conio.h>
int main()
{
	struct customer
	{
		char name[20];
		char address[30];
		char phoneno[20];
		struct account
		{
			char bname[20]; //branches
			int acno,balance;	//account no. and balance	
		}acc[5];
	}cus[5];
	
	int i,j,n,m;
	printf("enter how many customer: ");
	scanf("%d",&n);
	printf("how many accounts each customer have: ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		printf("enter the customer name,address and phone no.\n");
		scanf("%s%s%s",&cus[i].name,&cus[i].address,&cus[i].phoneno);
		printf("enter the bank branch data\n");
		for(j=1;j<=m;j++)
		{
			printf("enter the branch name,accountno. and balance: \n");
			scanf("%s%d%d",&cus[i].acc[j].bname,&cus[i].acc[j].acno,&cus[i].acc[j].balance);
		}
	}
	printf("customer data is: \n");
	for(i=1;i<=n;i++)
	{
		printf("customer name is: %s\n",cus[i].name);
		printf("customer address is: %s\n",cus[i].address);
		printf("customer phone no. is : %s\n",cus[i].phoneno);
		printf("Bank Data is:\n");
		for(j=1;j<=m;j++)
		{
			printf("branch name is:%s\n",cus[i].acc[j].bname);
			printf("account no. is: %d\n",cus[i].acc[j].acno);
			printf("balance is: %d\n",cus[i].acc[j].balance);
		}
		
	}	
}
