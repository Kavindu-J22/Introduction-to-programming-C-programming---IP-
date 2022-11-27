//radius of a circle and displays the diameter, the circumference and the area. 


#include<stdio.h>
int main(void){
	char gender;
	int age;
	
	printf("entre the gender\t");
	scanf("%s",&gender);
	
	if(gender=='m'){
		printf("enter the age\t");
		scanf("%d",&age);
		if(age>=65){
		printf("\n you are Senior Male");
		}
		else{
			printf("\n you are young male");
		}
			
	}
	
		else if(gender=='f'){
		printf("enter the age\t");
		scanf("%d",&age);
		if(age>=65){
			printf("\n you are Senior feMale\t");
		}
		else{
			printf("\n you are young female");
		}
	
	
	

	
}
return 0;
}
