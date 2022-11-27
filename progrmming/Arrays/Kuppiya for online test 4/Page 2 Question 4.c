//Page 2 Question 4

#include<stdio.h>

int main (void)
{
	int num[8];
	int i;
	int count = 0;
	
	for (i = 0 ; i < 8 ; i++)
	{
		printf("Enter a number : ");
		scanf("%d" , &num[i]);
	}
	
	for (i = 0 ; i < 8 ; i++)
	{
		if ( (num[i] == 3) && (num[i - 1] == 1))
		{
			count++;
		}
	}
	
	printf("\n");
	printf ("Num Array :");
	for (i = 0 ; i < 8 ; i++)
	{
		printf("%d " , num[i]);
	}
	
	printf("\n");
	printf ("Number of times the pattern '1 3' appear : %d\n" , count);
	
	return 0;
}
