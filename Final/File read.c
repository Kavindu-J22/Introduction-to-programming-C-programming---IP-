#include<stdio.h>

int main(void){
	
	FILE *cfPtr;
	char ID[10];
	char name[15];
	double average;

	cfPtr = fopen("marks.dat","r");
	
	if(cfPtr==NULL){
		printf("File Can not be open..!");
		return -1;
		
	}
	
	while(!feof(cfPtr)){
		fscanf(cfPtr,"%s%s%lf",&ID ,&name, &average);
		printf("ID : %s\nName : %s\nAverage : %lf\n",ID,name,average);
		printf("\n");	
	}

	
	fclose(cfPtr);	
	return 0;
}
