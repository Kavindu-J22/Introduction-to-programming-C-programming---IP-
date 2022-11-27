#include<stdio.h>

int main (void)
{
	float radius;
	
	printf("Input radious of the circle = ");
	scanf("%f" , &radius);

	double area = 22/7 * (radius *radius);	
	
	printf("The area of the circle is : %f " , area);
	
	return 0;	
}

