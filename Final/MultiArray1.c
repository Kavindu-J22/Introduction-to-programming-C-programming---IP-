#include<stdio.h>
#define size1 2
#define size2 3

int main(){
	int a[size1][size2];
	int i,j,total;
	
	for(i=0;i<size1;++i){
		for(j=0;j<=size2;++j){
			printf("Enter a[%d][%d] index number : ",i,j);
			scanf("%d",&a[i][j]);
			total+=a[i][j];
		}
		printf("\n");
	}
	printf("Total of full eliments : %d ",total);
	
	return 0;
}
