#include<stdio.h>

int max(int x,int y);

int main(){
	int num1,num2,anw;
	
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    anw = max(num1,num2);
    
    printf("Maximum Value is : %d",anw);
		
	return 0;
}

int max(int x,int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
