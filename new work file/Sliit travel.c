#include<stdio.h>
int main (void){
	int x,y;
	float Bparry[2];
	float tot1,totmain;
	
	for (x = 0 ; x < 3 ; x++){
		y = x+1;
		printf("enter %d bus price : ",y);
		scanf("%f",& Bparry[x]);	
	}
	tot1 = Bparry[0]+Bparry[1]+Bparry[2];
	printf("\nBus Price for One day = %.2f\n",tot1);
	
	totmain = (tot1*5)*14;
	printf("Bus Price for full semester = %.2f",totmain);
	
	return 0;
}
