#include<stdio.h>
struct book{
	int boockID;
	char Name[10];
	float price;
	int NoOfPages;
} book1,book2;

int main(){
	printf("##### Tow Boocks Data Entry Simple Program #####\n");
	
	printf("\nEnter frist boock ID (Only Numbers) : ");
	scanf("%d",&book1.boockID);
	printf("\nEnter frist boock Name : ");
	scanf("%s",&book1.Name);
	printf("\nEnter frist boock price : ");
	scanf("%f",&book1.price);
	printf("\nEnter frist boock's Number of Pages : ");
	scanf("%d",&book1.NoOfPages);
	printf("\n\n");
	
	printf("%d\n",book1.boockID);
	printf("%s\n",book1.Name);
	printf("%f\n",book1.price);
	printf("%d\n",book1.NoOfPages);
	
	return 0;
}
