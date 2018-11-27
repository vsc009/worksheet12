#include<stdio.h>
int main()
{
	float r,area,perimeter;

	printf("Enter the value of radius\n");
	scanf("%f",&r);

	area=(4.0/3)*(22/7)*r*r*r;
	perimeter=4*(22/7)*r*r;

	printf("Area=%0.3f\n",area);
	printf("Perimeter=%0.3f\n",perimeter);

	return 0;
}
