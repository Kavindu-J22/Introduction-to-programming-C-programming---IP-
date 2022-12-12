#include<stdio.h>

int main (void){
	char type;
	int i,htot,mtot,ftot;
	double hcal=0,mcal=0,fcal=0;
	
	printf("******Our courses******\n");
		printf("1. Hospitality Management (H) - Fee : 1500\n");
		printf("1. Diploma in Marketing (M) - Fee : 2000\n");
		printf("1. Diploma in Finance (F)  - Fee : 2500\n");
		printf("1. No more Selection (N)\n");
		

	
	for(i=1; i<=100&&type!='N'; ++i){
		
		printf("\nEnter Course Type Do you Select(H,M,F) :");
		scanf("%c",&type);
		
		
		if(type=='H'||type=='h'){
			htot+=1;
			hcal+=1500;
			printf("\nRegistration Successfull..!");
		}
		else if(type=='M'||type=='m'){
			mtot+=1;
			mcal+=2000;
			printf("\nRegistration Successfull..!");
		}
		else if(type=='F'||type=='f'){
			ftot+=1;
			fcal+=2500;
			printf("\nRegistration Successfull..!");
		}
		else
			printf("\n%c is Invalid Type..!",type);				
		
	}
	
		printf("1. Hospitality Management (H) Registered student : %dhtot  Total income : %lf\n",htot,hcal);
		printf("1. Diploma in Marketing (M) Registered student : %dhtot  Total income : %lf\n",mtot,mcal);
		printf("1. Diploma in Finance (F) Registered student : %dhtot  Total income : %lf\n",ftot,fcal);
	
	
	return 0;
}

