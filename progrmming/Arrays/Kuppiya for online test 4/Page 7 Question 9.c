//Page 7 Question 9

#include<stdio.h>

int main (void)
{
	double price[6];
	int i ;
	
	for(i = 0 ; i < 6 ; i++)
	{
		price[i] = 0;
	}
	
	for(i = 0 ; i < 6 ; i++)
	{
		printf("Input the price of book %d : " , i + 1);
		scanf("%lf" , &price[i]);
		
		if (price[i] <= 0)
		{
			printf("Please re-renter the amount\n");
			i--;
		}
	}
	
	for(i = 0 ; i < 6 ; i++)
	{
		price[i] = price[i] * 90.0 /100;
	}
	
	printf("\n");
	printf("Book ID\tPrice\n");
	for(i = 0 ; i < 6 ; i++)
	{
		printf("%d\t%.2lf\n" , i + 1 , price[i]);
	}
	
	return 0;
}
