#include<stdio.h>
#define SIZE 10
int main (){
	int a[SIZE];
	int i;
	int max = a[0];
	
	for(i=0;i<SIZE;++i){
		a[i]=0;
	}
	
	for(i=0;i<SIZE;++i){
		printf("Enter %d index Number : ",i);
		scanf("%d",&a[i]);
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("Max Valiue of array : %d",max);
	
	
	return 0;
}
