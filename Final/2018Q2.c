#include<stdio.h>
#include<string.h>

struct bank{
	int accno;
	char name[10];
	char TransType;
	double amount; 
};

int main (void){
	int i,j;
	double totdep=0,totwith=0,maxwith=0,maxdip=0;
	char maxdname[10];
	char maxwithname[10];
	

	struct bank cus[5];
	
	for(i=0; i<5; ++i){
		printf("Enter Account Number : ");
		scanf(" %d",&cus[i].accno);
		printf("Enter Customer name : ");
		scanf(" %s",&cus[i].name);
		printf("Enter Customer Transaction Type(W/D) : ");
		scanf(" %c", &cus[i].TransType);
		printf("Enter Amount : ");
		scanf(" %lf",&cus[i].amount);
		printf("\n");
	}
	
	
	for(i=0; i<5; ++i){
		if(cus[i].TransType=='W'){
			maxwith=cus[i].amount;
			totwith+=cus[i].amount;

			
		}
		
		else{
			totdep+=cus[i].amount;
			
			if(maxdip<cus[i].amount){
				maxdip=cus[i].amount;
				strcpy(maxdname, cus[i].name);
			}			
		}	
	}
	
	for(j=0; j<5; ++j){
		if(maxwith>cus[j].amount && cus[j].TransType=='W'){
			strcpy(maxwithname, cus[i].name);
			maxwith=cus[i].amount;
		}
		else
			printf("*\n");
	}
	
	printf("Total deposit amount : %.2f\n",totdep);
	printf("Total Withdrow amount : %.2f\n",totwith);
	printf("Max deposit customer name : %s\n",maxdname);
	printf("Min withdrow customer name : %s\n",maxwithname);
	
	
	return 0;
}
