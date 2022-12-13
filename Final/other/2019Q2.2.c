#include<stdio.h>
int main (void)
{
	int ratings[3][4];
	int i, j, TotalR=0, MaxA=0, MovieMaxA;
	float AvgR=0;
	
	for(i=0; i<3; i++)
	{
		printf("\n   Movie %d\n", i+1);
		
		for(j=0; j<4; j++)
		{
			printf("Enter Rating %d : ", j+1);
			scanf("%d", &ratings[i][j]);
		}
	}
	puts("");
	printf("%6s%10s%10s%10s%10s\n", "Movie", "Rating 1", "Rating 2", "Rating 3", "Rating 4");
	
	for(i=0; i<3; i++)
	{
		printf("%3d", i+1);
		for(j=0; j<4; j++)
		{
			printf("%10d", ratings[i][j]);
		}
		puts("");

	}
	
	puts("");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			TotalR = TotalR + ratings[i][j];
		}
		AvgR = (float)TotalR/4;
		printf("Movie %d Avarage : %.2f \n", i+1, AvgR);
		TotalR = 0;
		
		if(MaxA<AvgR)
		{
			MaxA = AvgR;
			MovieMaxA = i+1;
		}
	}
	
	puts("");
	printf(" Movie %d has highest avarage rating.", MovieMaxA);
return 0;	
}
