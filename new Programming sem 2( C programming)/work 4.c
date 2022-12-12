#include<stdio.h>
int main(void)
{

char numbers[3][4] = {{20,5,43,55},{67,78,89,90},{90,0,21}};

int i,x;
printf("enter the you like grade info");
for (i = 0;i <=0 ; i ++)
{

	printf("____________________________________\n");
	for (x = 0; x < 4; x++)
	{
		printf("%d\n",numbers[i][x]);
	}	
}
return 0;
}
