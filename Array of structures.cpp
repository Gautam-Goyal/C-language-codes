#include <stdio.h>
#include <conio.h>
struct student
{
	char name[12];
	int roll,marks;
}S[10];//array of structures
main()
{
	int n,i;
	printf("enter how many students ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    printf("enter the name and roll no. of student %d \n",i);
	    scanf("%s%d",&S[i].name,&S[i].roll);
	    printf("enter the Marks ");
	    scanf("%d",&S[i].marks);
    }
    for(i=1;i<=n;i++)
	{
	    printf("student %d --> name=%s , roll no.=%d \n",i,S[i].name,S[i].roll);
	    printf("Marks=%d \n",S[i].marks);
    }
    getch();
}
