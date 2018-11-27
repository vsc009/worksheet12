#include<stdio.h>
int main()
{
	double s1,s2,s3,s4,area,perimeter;
	printf("Enter the value of sides consequtely\n");
	scanf("%lf%lf%lf%lf",&s1,&s2,&s3,&s4);
	if(s1==s3 && s2==s4)
	{
		area=s1*s2;
		perimeter=s1+s2+s3+s4;
			if(area>perimeter)
			{
				printf("Area is greater\n");
			}
			else
			{
				printf("perimeter is greater\n");
			}
	}
	else
	{
		printf("this is not rectangle");
	}
	return 0;
}
