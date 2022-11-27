//Page 6 Question 8

#include<stdio.h>

int main(void)
{
	double sales[5] , input;
	int i ;
	
	for(i = 0 ; i < 5 ; i++)
	{
		sales[i] = 0;
	}
	
	for(i = 0 ; i < 5 ; i++)
	{
		printf("Input the sales of salesmen %d : " , i + 1);
		scanf("%lf" , &input);
		
		if(input < 0 )
		{
			printf("Please re-renter the amount\n");
			i--;
		}
		else
		{
			sales[i] = input;
		}
	}
	
	printf("\n");
	printf("Sales person number\tSales Amount\n");
	for(i = 0 ; i < 5 ; i++)
	{
		if (sales[i] > 20000)
		{
			printf("%d\t\t\t%.2lf\n" , i + 1 , sales[i]);
		}
	}
	
	
	

	return 0;
}
