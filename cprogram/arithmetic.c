#include<stdio.h>
#define PI 3.14
int main()
{
	float r;
	float area;
	printf("Enter the radius: ");
	scanf("%f",&r);
	area=PI*r*r;
	printf("Area of a circle is: %.4f",area);
	printf("Circumference of circle: %.2f",2*PI*r);
	return 0;
}
