#include<stdio.h>
int rect(int x);
int main(){
	int y;
	
	printf("Enter number of squre reange : ");
	scanf("%d",&y);
	
	printf("%d",rect(y));
}

int rect(int x){
	int a,b;
	
	for(a=1;a<=x;a++){
		for(b=1;b<=x;b++){
			printf("*");
		}
		printf("\n");
	}
	return x;
}
