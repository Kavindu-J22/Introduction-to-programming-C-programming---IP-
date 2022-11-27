//Page 2 Question 3

#include<stdio.h>

int main(void)
{
	float myArray[10];
	float largeNum[10];
	int i , j = 0;
	int large = 0;
	float total = 0 , average;
	
	for (i = 0 ; i < 10 ; i++)
	{
		printf("Enter a number : ");
		scanf("%f" , &myArray[i]);
		
		total += myArray[i];
	}
	
	average = total / 10;
	
	printf("\n");
	printf("Average : %.1f\n" , average);
	
	printf("myArray : ");
	for (i = 0 ; i < 10 ; i++)
	{
		printf("%.0f " , myArray[i]);
		
		if (myArray[i] > average)
		{
			largeNum[j] = myArray[i];
			j++;
		}
	}
	
	printf("\n");
	printf("largeNum : ");
	for (i = 0 ; i < j ; i++)
	{
		printf("%.0f " , largeNum[i]);
	}
	
	return 0;
}
