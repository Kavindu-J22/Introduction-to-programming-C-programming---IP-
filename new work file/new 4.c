#include<stdio.h>
int main(void){
	int x,y,z;
	
	for(x = 0 ; x<6 ; x++){
		for (y = 0 ; y < 7 ; y++){
			if(x == 0 || x== 5){
				if(y == 0 || y == 1 || y == 5 || y == 6)
				printf(" ");
				else 
				printf("*");
			}
			else if(x == 1 || x == 4){
				if(y == 0 ||y == 6 || y > 1 && y < 5)
				printf(" ");
				else
				printf("*");
			}
			else{
				if(y == 0 || y == 6)
				printf("*");
				else
				printf(" ");
			}
		}
		puts("");
	}
	return 0;
}
