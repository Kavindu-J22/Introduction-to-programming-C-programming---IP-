#include<stdio.h>

void arrayFn(int arr[]);

int main (void)
{
	int i[5] = {1,2,3,4,5};
	
	arrayFn(i);
	
	return 0;
}

void arrayFn(int arr[])
{
	int x;
	
	for (x = 0 ; x < 5 ; x++)
	{
		arr[x] *= 2;
		
		printf("%d\n" , arr[x]);
	}
}
