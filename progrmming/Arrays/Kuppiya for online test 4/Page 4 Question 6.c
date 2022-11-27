//Page 4 Question 6
#include<stdio.h>

int main(void)
{
	int rate[5] , input = 0;
	int i;
	
	for (i = 0 ; i < 5 ; i++)
	{
		rate[i] = 0;
	}
	
	while(input != -1)
	{
		printf("Please input the service rating : ");
		scanf("%d" , &input);
		
		if (input >= 1 && input <= 5)
		{
			rate[input - 1]++;
		}
		else if (input == -1)
		{
			break;
		}
		else
		{
			printf("Invalid Rating. Please enter a number between 1-5!\n");
		}
	}


	printf("\n");
	
	printf("Rating\tNumber of Response\n");
	for (i = 0 ; i < 5 ; i++)
	{
		printf("%d\t%d\n" , i + 1 , rate[i]);
	}
	
	return 0;
}
