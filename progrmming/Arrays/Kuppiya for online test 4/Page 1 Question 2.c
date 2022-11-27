//Page 1 Question 1

#include<stdio.h>

int main (void)
{
	int numArr[10];
	int positiveNum[10];
	int negativeNum[10];
	int i , j = 0 , k = 0;
	
	for (i = 0 ; i < 10 ; i++)
	{
		printf("Enter a Number : " );
		scanf("%d" , &numArr[i] );
	}
	
	printf("\n\n");
	printf("Number Series : " );
	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d " , numArr[i]);
	}
	
	for (i = 0 ; i < 10 ; i++)
	{
		if (numArr[i] >= 0)
		{
			positiveNum[j] = numArr[i];
			j++;
		}
		else
		{
			negativeNum[k] = numArr[i];
			k++;	
		}
	}
	
	printf("\n");
	printf("Positive Number : " );
	for (i = 0 ; i < j ; i++)
	{
		printf("%d " , positiveNum[i]);
	}
	
	printf("\n");
	printf("Negative Number : " );
	for (i = 0 ; i < k ; i++)
	{
		printf("%d " , negativeNum[i]);
	}
	return 0;	
}
