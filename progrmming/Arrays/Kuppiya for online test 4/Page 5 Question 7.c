//Page 5 Question 7

#include<stdio.h>

int main(void)
{
	int seat[10];
	int i , input = 0 ;
	
	for(i = 0 ; i < 10 ; i++)
	{
		seat[i] = 0;
	}
		
	while (input != -1)
	{
		printf("Please input the seat number (1-10): ");
		scanf("%d" , &input);
			
		if(input == -1)
		{
			break;
		}	
		else if (input > 10 || input < 1)
		{
			printf("Sorry. Please enter a valid seat number.\n");
		}
		else if (seat[input - 1] == 1)
		{
			printf("Sorry. The seat %d is reserved.\n" , input);
		}
		else
		{
			seat[input - 1]++;
		}
	}
	
	printf("\n");
	printf("Reserved Seats : ");
	
	for(i = 0 ; i < 10 ; i++)
	{
		if (seat[i] == 1)
		{
			printf("%d " , i + 1);	
		}	
	}
	
	return 0;
}
