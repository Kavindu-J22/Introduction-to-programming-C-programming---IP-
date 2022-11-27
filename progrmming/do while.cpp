#include<stdio.h>
int nain(void){
	int input;
	do{
		printf("plese enter the number 0-9");
		scanf("%d",&input);
		
	}
	while(input<0||input>9);
	
	return 0;
}

