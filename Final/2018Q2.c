#include<stdio.h>

struct bank{
	int accno;
	char name[10];
	char TransType;
	double amount; 
}c1,c2,c3,c4,c5;

int main (void){
	int i,j;
	double totdep=0,totwith=0;
	char maxdname[10];
	char maxwithname[10];
	
	struct bank cus[5][4];
	
	for(i=0; i<5; ++i){
		printf("Enter Account Number : ");
		scanf(" %d",&cus[i][0].accno);
		printf("Enter Customer name : ");
		scanf(" %s",&cus[i][1].name);
		printf("Enter Customer Transaction Type(W/T) : ");
		scanf(" %c", &cus[i][2].TransType);
		printf("Enter Amount : ");
		scanf(" %lf",&cus[i][3].amount);
		printf("\n");
	}
	
	for(i=0; i<5; ++i){
		if(cus[i][2].TransType=='W')
			totwith+=cus[i][3].amount;
		else
			totdep+=cus[i][3].amount;		
	}
	
	printf("Total deposit amount : %.2f",totdep);
	printf("Total Withdrow amount : %.2f",totwith);
	
	return 0;
}
