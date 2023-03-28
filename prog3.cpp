#include<stdio.h>
int main()
{
	float r;
	float pi = 3.14 , area ,c;
	printf("Enter the radius of circle = ");
	scanf("%f", &r);
	area=pi*r*r;
	c=2*pi*r;
	printf("The circumferance of the circle is = %f\n ",c);
	printf("The area of circle is = %f", area);
	return 0;
//	getch();
}
