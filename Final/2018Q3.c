#include<stdio.h>
#include<assert.h>

float calDiscount(int time,float totAmount);
void testDiscount();
void displayGift(float finalTot);
double finalAmount;

int main(void){
	int time;
	double amount,totAmount;
	
	printf("Enter the time period : ");
	scanf(" %d",&time);
	printf("Enter the Total Amount : ");
	scanf(" %lf",&amount);
	
	totAmount=calDiscount(time,amount);
	printf("Final Amount(after discount) : %.2f\n",totAmount);
	displayGift(totAmount);
	
	return 0;
}
float calDiscount(int time,float totAmount){
	if(19>=time&&time>=16){
		if(5000 >totAmount&&totAmount>=2500)
			finalAmount=totAmount-((7*totAmount)/100);
		else if(totAmount&&totAmount>=5000)
			finalAmount=totAmount-((10*totAmount)/100);
		else
			finalAmount=totAmount;	
	}
	
	else if(22>=time>=20){
		if(5000 >totAmount&&totAmount>=2500)
			finalAmount=totAmount-((9*totAmount)/100);
		else if(totAmount&&totAmount>=5000)
			finalAmount=totAmount-((12*totAmount)/100);
		else
			finalAmount=totAmount;	
	}
	else
		printf("Error..invalid time..!");
	
	
	return finalAmount;
}

void displayGift(float finalAmount){
	if(5000>finalAmount&&finalAmount>=3000)
		printf("Your gift : pack of 6 eggs");
	else if(7000>finalAmount&&finalAmount>=5000)
		printf("Your gift : 1kg Sugar");
	else if(finalAmount>=7000)
		printf("Your gift : Pack of milk");
}


