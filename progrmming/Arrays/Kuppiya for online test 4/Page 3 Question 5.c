//Page 3 Question 5

#include<stdio.h>

int main(void)
{
	int arrNum[6];
	int i;
	
	printf("Enter values to the Array : \n");
	for (i = 0 ; i < 6 ; i++ )
	{
		scanf("%d" , &arrNum[i]);
	}
	
	for(i = 0 ; i < 5 ; i++ )
	{
		if (arrNum[i] < arrNum[i + 1])
		{
			continue;
		}
		else
		{
			printf("Numbers are not in ascending order.\n");
			break;
		}
	}
	
	if (i == 5)
	{
		printf("Numbers are in ascending order.\n");
	}
	
	return 0;
}
