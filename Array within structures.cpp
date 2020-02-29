#include <stdio.h>
#include <conio.h>
struct student
{
	char name[12];
	int roll,marks[10];//Array within structures
}S[10];//Array of structures
main()
{
	int n,i,m,j;
	printf("enter how many students ");
	scanf("%d",&n);
	printf("Enter how many subjects");
	scanf("%d",&m);
	
	for(i=1;i<=n;i++)
	{
	    printf("enter the name and roll no. of student %d \n",i);
	    scanf("%s%d",&S[i].name,&S[i].roll);
	    for(j=1;j<=m;j++)
	    {
	    	printf("enter the Marks in  subject %d\n",j);
	    	scanf("%d",&S[i].marks[j]);
    	}
    }
    for(i=1;i<=n;i++)
	{
	    printf("student %d --> name=%s , roll no.=%d \n",i,S[i].name,S[i].roll);
	    for(j=1;j<=m;j++)
	    {
	    	printf("Marks in  subject %d --> %d\n",j,S[i].marks[j]);
    	}
    }
    getch();
}
