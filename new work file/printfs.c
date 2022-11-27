#include<stdio.h>
int main(void){
	int x = 2;
	int y = 3;
	float z = 45.567;
	
	printf("%d ",x+x);
	printf( "\n%d = %d", x+y, y+x);
	printf("\nZ's value is : %.2f\n",z);
	
	printf( "%.2f\n", 3.446);
	printf("%.1f\n", 3.446);
	
	printf("\n%.2f",123.4567);
	
	return 0;
}
