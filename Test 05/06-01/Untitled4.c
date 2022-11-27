#include<stdio.h>

int main (void)
{
	int arr1[3][3];
	int arr2[3][3];
	int i , j;
	
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			arr1[i][j] = 0;
			arr2[i][j] = 0;
		}
	}
	
	
	for (i = 0 ; i < 3 ; i++)
	{
		printf("Row No %d\n" , i + 1);
		for (j = 0 ; j < 3 ; j++)
		{
			printf("Enter the number for Colunm no %d : " , j + 1);
			scanf("%d" , &arr1[i][j]);
		}
	}
	printf("\n");
	
	printf("arr1\n");
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%d " , arr1[i][j]);
		}
		printf("\n");
	}
	
	for(j = 0 ; j < 3 ; j++)
	{
		for(i = 0 ; i < 3 ; i++)
		{
			//printf("%d " , arr1[i][j]);
			arr2[j][i] = arr1[i][j];
		}
		printf("\n");
	}
	
	printf("arr2\n");
	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%d " , arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
