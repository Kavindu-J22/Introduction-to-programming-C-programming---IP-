
//using if comands and finding some bill amounts

#include<stdio.h>
int main(void){
	int custem;
	float discount,value,finalvalue;
	
	printf("enter the coustem type 1,2\t");
	scanf("%d",&custem);
	if(custem==1){
		printf("enter the bill amount\t"); 
		scanf("%f",&value);
		if(value<=2500){
			discount=(value/100)*5;
			printf("\ndiscount\t%.2f",discount);
		}
		else if(value>2500){
			discount=(value/100)*10;
			printf("\ndiscount\t%.2f",discount);
		}
		
	
	}
	else if(custem==2){
		printf("enter the bill amount\t");
		scanf("%f",&value);
		if(value>5000){
			discount=(value/100)*10;
			printf("\ndiscount is\t%.2f",discount);
		}
	}
	
	
	finalvalue=value-discount; 
	printf("\nfinal value is\t%.2f",finalvalue);
	
	
	return 0;
}
