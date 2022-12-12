#include<stdio.h>
int main ()
{		
	int n=5;
	int number[n];
	
	number[0] = 2;
	number[1] = 4;
	number[2] = 6;
	number[3] = 8;
	number[4] = 10;
	
	int i;
	printf("The Array Eliments\n");
	for(i = 0; i < n; i++)
		printf("%d\n",number[i]);
		
	number[2]=600;
	 printf("Array Eliments new\n");
	 for(i = 0; i<n; i++)
	printf("%d\n",number[i]);
	
	return 0;
}

