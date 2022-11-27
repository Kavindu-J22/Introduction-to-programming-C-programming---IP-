#include<stdio.h>
int main(void){
	int x,y;
	for (x = 0 ; x < 6 ; x++){
		for(y = 0 ; y < 8 ; y++){
			if(x == 0 || x == 5)
			printf("*");
			else{
				if(y== 0 || y == 7)
				printf("*");
				else
				printf(" ");
			}
			
		}
		printf("\n");
	}	
	
	
	return 0;
}
