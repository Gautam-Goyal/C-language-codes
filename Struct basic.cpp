#include <stdio.h>
#include <conio.h>
struct student
{
	char name[12];
	int roll,marks;
}S,S1;
main()
{
	printf("enter the name and roll no. of 1st \n");
	scanf("%s%d",&S.name,&S.roll);
	printf("enter the marks ");
	scanf("%d",&S.marks);
	printf("enter the name and roll no. of 2nd\n");
	scanf("%s%d",&S1.name,&S1.roll);
	printf("enter the marks of 2nd ");
	scanf(" %d",&S1.marks);
    printf("name of the 1st student is %s and roll no.=%d\n",S.name,S.roll);
    printf("marks=%d\n",S.marks);
    printf("the name of 2nd student is %s nad roll no. =%d\n",S1.name,S1.roll);
    printf("marks=%d\n",S1.marks);
    getch();
}
