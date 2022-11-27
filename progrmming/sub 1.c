//radius of a circle and displays the diameter, the circumference and the area. 


#include<stdio.h>
int main(void){
	int subject1,subject2;
	float average;
	
	printf("enter the mark 01\t ");
	scanf("%d",&subject1);
	printf("enter the mark 02\t ");
	scanf("%d",&subject2);
	
	average=(subject1+subject2)/2.0;
	printf("%.2f",average);
	
	if(average>=45){
		printf("\n you are pass");
	}
	else{
		printf("\n yor are fail");
	}
	
	
	
	
	
	
	
	
	
	

	return 0;
}
