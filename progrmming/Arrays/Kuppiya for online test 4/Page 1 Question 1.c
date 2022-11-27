//Page 1 Question 1

#include<stdio.h>

int main (void)
{
	int numArr[6];
	int oddNum[6];
	int evenNum[6];
	int i , j = 0 , k = 0;
	
	for (i = 0 ; i < 6 ; i++)
	{
		printf("Enter a Number : " );
		scanf("%d" , &numArr[i] );
	}
	
	printf("\n\n");
	printf("Number Series : " );
	for (i = 0 ; i < 6 ; i++)
	{
		printf("%d " , numArr[i]);
	}
	
	for (i = 0 ; i < 6 ; i++)
	{
		if (numArr[i] % 2 == 0)
		{
			oddNum[j] = numArr[i];
			j++;
		}
		else
		{
			evenNum[k] = numArr[i];
			k++;	
		}
	}
	
	printf("\n");
	printf("Odd Number : " );
	for (i = 0 ; i < k ; i++)
	{
		printf("%d " , evenNum[i]);
	}
	
	printf("\n");
	printf("Even Number : " );
	for (i = 0 ; i < j ; i++)
	{
		printf("%d " , oddNum[i]);
	}
	return 0;	
}
