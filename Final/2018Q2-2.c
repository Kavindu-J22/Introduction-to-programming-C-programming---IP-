#include<stdio.h>
int main(void){
	int i,j;
	char panel[4][4];
	char pos;
	
	
	for(i=0; i<4; ++i){
		for(j=0; j<4; ++j){
			printf("Enther the color of Led Bulb(R,G or B) [%d][%d] : ",i,j);
			scanf(" %c", &panel[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<4; ++i){
		for(j=0; j<4; ++j){
			printf(" %c",panel[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Red LED Bulb position");
	
	for(i=0; i<4; ++i){
		for(j=0; j<4; ++j){
			if(panel[i][j]=='R'){
				printf("[%d,%d]",i,j);
		}
	}
}
	return 0;
}


