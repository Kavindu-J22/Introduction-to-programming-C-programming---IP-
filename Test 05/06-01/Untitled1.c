#include<stdio.h>
#include<string.h>


int main (void)
{
	char input[20] = "Welcome TO SLIIT"; 
	char output[20];
	int len;
	
	//printf("Enter Character : ");
	//scanf("%s" , input);
	
	strcpy(output , input);
	
	//len = strlen(input);
	
	//printf("%d\n" , len);
	
	printf("%s\n" , output);
	
	//printf("%s" , input);
	
	return 0;
}


