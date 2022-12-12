#include<stdio.h>

struct bank{
	int accno;
	char name[10];
	char TransType;
	double amount; 
}c1,c2,c3,c4,c5;

int main (void){
	int i,j;
	struct bank cus[5][4];
	
	for(i=0; i<5; ++i){
			printf("Enter Account Number : ");
			scanf(" %d",&cus[i][0].accno);
			printf("Enter Customer name : ");
			scanf(" %s",&cus[i][1].name);
			printf("Enter Customer Transaction Type : ");
			scanf(" %c", &cus[i][2].TransType);
			printf("Enter Amount : ");
			scanf(" %lf",&cus[i][3].amount);
			printf("\n");
	}
	
	
	return 0;
}
