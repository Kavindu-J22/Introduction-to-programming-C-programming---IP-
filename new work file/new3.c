#include<stdio.h>
int main (void){
	int x,y,z,q;
	for(x = 0 ; x<5 ; x++){
		for(y = 5 ; y>x ; y--){
			printf(" ");
		}
		for(z = 0 ; z< (x+1) ; z++){
			printf("*");
		}
		for(q = 1 ; q<(x+1); q++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
