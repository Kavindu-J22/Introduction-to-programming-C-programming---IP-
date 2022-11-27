#include<stdio.h>

int main (void)
{
	int array1[2][3] = {{1,2,3} , {4,5,6}};
	int array2[2][3] = {1,2,3,4,5};
	int array3[2][3] = {{1,2} , {4}};
	int i , j;
	
	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < 3 ; j++)
		{
			printf("%d " , array3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
