#include<stdio.h>
#include<stdbool.h>

int main(void){
	char EmpID[5];
	char enpName[10];
	int atSt[7];
	int i,j;
	
	 FILE*cfPtr;
	 cfPtr=fopen("Attendenc.dat","w");
	 
	 if(cfPtr==NULL){
	 	printf("File Cannot be open..!");
	 	return -1;
	 }
	 
	 for(i=0; i<2; ++i){
	 	printf("Enter Emp ID : ");
	 	scanf(" %s",&EmpID);
	 	printf("Enter Emp name : ");
	 	scanf(" %s",&enpName);
	 	
	 	for(j=0; j<7; ++j){
	 		printf("Enter day %d Attendance status(absent-0/oresent=1) : ",j+1);
	 		scanf(" %d",&atSt[j]);	
		 }
		
		fprintf(cfPtr," %s%s%d",EmpID,enpName,atSt);
		printf("\n");
	 }
	 
	 fclose(cfPtr);
	 
	 cfPtr = fopen("Attendenc.dat","r");
	 
	 fscanf(cfPtr," %s %s %d",&EmpID,&enpName,&atSt);
	 
	 while(!feof(cfPtr)){
	 	printf(" %s\t%s\t%d",EmpID,enpName,atSt);
	 	fscanf(cfPtr," %s %s %d",&EmpID,&enpName,&atSt);
	 }
	 fclose(cfPtr);
	
	return 0; 
}
