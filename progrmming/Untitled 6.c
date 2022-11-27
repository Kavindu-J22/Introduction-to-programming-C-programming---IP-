//radius of a circle and displays the diameter, the circumference and the area. 


#include<stdio.h>
int main(void){
	int no;
	int dig1,dig2,dig3,dig4,dig5;
	
	no=42139;
	
	dig1=no/10000;
	dig2=(no%10000)/1000;
	dig3=(no%1000)/100;
	dig4=(no%100)/10;
	dig5=(no%10)/1;
	
	printf("%d\t%d\t%d%\t%d\t%d\t",dig1,dig2,dig3,dig4,dig5);
	
	
	
	
	
	
	
	return 0;
}
