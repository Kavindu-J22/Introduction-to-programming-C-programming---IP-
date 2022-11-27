#include<stdio.h>

int main(void)
{
	char bulbs[4][4];
	int i , j ;
	
	for(i = 0 ; i < 4 ; i++)
	{
		printf("Row no %d\n" , i);
		for (j = 0 ; j < 4 ; j++)
		{
			printf("Enter the bulb color for colunm no %d : " , j);
			scanf("%c%*c" , &bulbs[i][j]);
			
			if( !(bulbs[i][j] == 'R' || bulbs[i][j] == 'G' || bulbs[i][j] == 'B') )
			{
				printf("Invalid Input!!\n");
				j--;
			}					
		} 
	}
	
	printf("\n");
	for (i = 0 ; i < 4 ; i++)
	{
		for (j = 0 ; j < 4 ; j++)
		{
			printf("%c " , bulbs[i][j]);
		} 
		printf("\n");
	}
	printf("\n");
	
	printf("Red LED bulb Positions\n");
	for (i = 0 ; i < 4 ; i++)
	{
		for (j = 0 ; j < 4 ; j++)
		{
			if (bulbs[i][j] == 'R')
			{
				printf("[%d,%d] " , i , j);
			}
		} 
	}
	
	printf("\n");
	
	printf("Blue LED bulb Positions\n");
	for (i = 0 ; i < 4 ; i++)
	{
		for (j = 0 ; j < 4 ; j++)
		{
			if (bulbs[i][j] == 'B')
			{
				printf("[%d,%d] " , i , j);
			}
		} 
	}
	
	printf("\n");
	
	printf("Green LED bulb Positions\n");
	for (i = 0 ; i < 4 ; i++)
	{
		for (j = 0 ; j < 4 ; j++)
		{
			if (bulbs[i][j] == 'G')
			{
				printf("[%d,%d] " , i , j);
			}
		} 
	}
	
	return 0;
}
