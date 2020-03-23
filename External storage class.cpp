#include <stdio.h>
#include <conio.h>
void test1();     /* somewhere here "int i=1;" instead of after ending of main like written here.*/
void test2();
int main()
{
	extern int i; /*here,extern is written because i is declared after main function and to inform function that i somewhere 
	              outside.**IT IS NOT A DECLARATION ,BUT IS ONLY TO INFORM THAT i HAS BEEN DECLARED OUTSIDE**. IF instead
				   of it int i was declared in starting there was no need to write extern int i; statement like ^ there*/
	i++;
	printf("IN main --> %d\n",i);
	test1();
	printf("after test1 --> %d\n",i);
	test2();
	printf("after test2 --> %d\n",i);
	return 0;
}
int i=1;      /*if i was not assigned any value then by default it must considered 0*/
void test1()
{               /*here extern is not used because i has been declared before test function and it has become global for
                 all upcoming functions*/
	i++;
	printf("IN test1 ---> %d\n",i);
}
void test2()
{
	int i=5; /*here in test2 i is declared again.So here it will choose the most local or nearest value i.e. here 5.
	        OR in other words it is in auto storage class and it's result will be eliminated as soon as the function test2 
			terminates.*/
	i++;
	printf("IN test2 ---> %d\n",i);
}
