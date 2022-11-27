//radius of a circle and displays the diameter, the circumference and the area. 


#include<stdio.h>
int main(void){
	float area,radius,diameter,circumference;
	printf("Enter the radius\t");
	scanf("%f",&radius);
	
	area = (7.0/22)*radius*radius;
	diameter =radius*2.0;
	circumference= 2*(7.0/22)*radius;
	
	printf("Area is %.2f\n",area);
	printf("diameter is %.2f\n",diameter);
	printf("circumference is %.2f\n",circumference);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
