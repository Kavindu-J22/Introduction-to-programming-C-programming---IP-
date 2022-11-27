#include<stdio.h>

int main (void)
{
	double salaries[5];
	int i ;
	
	for(i = 0 ; i < 5 ; i++)
	{
		salaries[i] = 0;
	}
	
	for(i = 0 ; i < 5 ; i++)
	{
		printf("Input the salary of employee %d : " , i + 1);
		scanf("%lf" , &salaries[i]);
		
		if (salaries[i] <= 0)
		{
			printf("Please re-renter the amount\n");
			i--;
		}
	}
	
	for(i = 0 ; i < 5 ; i++)
	{
		if(salaries[i] < 10000 )
		{
			salaries[i] = salaries[i] * 110.0 /100;
		}
	}
	
	printf("\n");
	printf("Employee Number\tSalaty\n");
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d\t%.2lf\n" , i + 1 , salaries[i]);
	}
	
	return 0;
}
