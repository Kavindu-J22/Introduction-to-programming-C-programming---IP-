#include<stdio.h>
int main(void){
	int no;
	int count=0;
	int total=0;
	float average;
	
	printf("enter number\t");
		scanf("%d",&no);
		printf("%d\n",no);
	
	while(no>0){
		
		
		if(no<0){
			total=total+0;
			count=count+0;
		}
		else{
			total=total+no;
			count=count+1;
		}
		printf("enter number\t");
		scanf("%d",&no);
		printf("%d\n",no);
		
	}
average = total/ count;
printf("total is %d\n",total);
printf("average is%.2f\n",average);
	
	
	return 0;
}
