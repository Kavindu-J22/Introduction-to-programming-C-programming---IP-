#include<stdio.h>

int main(void){
	char ID[10];
	char name[15];
	double average;
	int x;
	
	FILE *cfPtr;
	cfPtr = fopen("marks.dat", "w");
	
	if(cfPtr==NULL){
		printf("File Canot be open..!");
		return -1;
	}
	
	for(x=1; x<=2; ++x){
		printf("Pls input the student ID : ");
		scanf("%s", ID);
		printf("Pls input the name : ");
		scanf("%s", name);
		printf("Pls input the average Marks : ");
		scanf("%lf",& average);
		fprintf(cfPtr, "%s %s %.2f\n", ID, name, average);
		printf("\n");
	}
	fclose(cfPtr);
	
	return 0; 
}
