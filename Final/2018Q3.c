#include<stdio.h>
#include<assert.h>

float calDiscount(int time,float totAmount);
void testDiscount();
void displayGift(float finalTot);
double finalAmount;

int main(void){
	
}
float calDiscount(int time,float totAmount){
	if(16>=time>=19){
		if(5000 >totAmount>=2500)
			finalAmount=totAmount-((7*totAmount)/100);
		else if(totAmount>=5000)
			finalAmount=totAmount-((10*totAmount)/100);
		else
			finalAmount=totAmount;	
	}
	
}
