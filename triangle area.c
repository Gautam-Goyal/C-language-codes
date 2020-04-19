#include<stdio.h>
#include<math.h>
void dist(int,int,int,int,int,int, float *, float *, float *);
void area(float ,float ,float , float *);
int main()
{
	int x1,x2,x3,y1,y2,y3;
	float d12,d23,d31,ar;
	
	printf("Enter x coordinate of point A: ");
	scanf("%d", &x1);
	
	printf("Enter y coordinate of point A: ");
	scanf("%d", &y1);
	
	printf("Enter x coordinate of point B: ");
	scanf("%d", &x2);
	
	printf("Enter y coordinate of point B: ");
	scanf("%d", &y2);
	
	printf("Enter x coordinate of point C: ");
	scanf("%d", &x3);
	
	printf("Enter y coordinate of point C: ");
	scanf("%d", &y3);
		
	dist(x1,y1,x2,y2,x3,y3,&d12,&d23,&d31);
	printf("\nDistance between point A and B: %f", d12);
	printf("\nDistance between point B and C: %f", d23);
	printf("\nDistance between point C and A: %f", d31);
	
	area(d12,d23,d31,&ar);
	printf("\n\nArea of the triangle: %f", ar);
	
	return 0;
}

void dist(int x1,int y1,int x2,int y2,int x3,int y3, float *d12, float *d23, float *d31)
{
	*d12= pow((((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))), 0.5);
	*d23= pow((((x3-x2)*(x3-x2)) + ((y3-y2)*(y3-y2))), 0.5);
	*d31= pow((((x3-x1)*(x3-x1)) + ((y3-y1)*(y3-y1))), 0.5);
}

void area(float d12,float d23,float d31, float *ar)
{
	float s;
	s=(d12+d23+d31)/2;
	*ar= sqrt(s* (s- d12) * (s- d23) * (s- d31));
}
 
