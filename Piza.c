#include<stdio.h>

int main(void)
{

char size;
int qut,pri,y=1,x=0;
int cid,n;

printf("piza size small : s/S = 500 loyeal customer discount 5 \n");
printf("piza size medium : m/M = 1000 loyeal customer discount 10 \n ");
printf("piza size large : l/L = 1500 loyeal customer discount 15 \n");
printf("If you want to close the program : f/F \n");


printf("\nEnter the customer ID : ");
scanf("%d",&cid);

do{
printf("\n\nenter the piza size do you want :  ");
scanf("%s",&size);

if(size =='s'||size == 'S'){
	printf("enter the piza  Quantity :  ");
	scanf("%d",&qut);
	
	if(cid==1||cid==2||cid==3||cid==4||cid==5||cid==6||cid==7||cid==8||cid==9||cid==10){
		x+=500*qut-(5*(500*qut)/100);
		n=500*qut;
		printf("You are our loyel customer\n ");
		printf("Total - (discount(5/100))= %d",x);
		printf("\nSummery =%d - 5 presentage",n);
	}
	else{
		x+=500*qut;
		n=500*qut;
		printf("Amount = %d\n",n);
		printf("All total = %d",x);
	}
}

else if(size =='m'||size == 'M'){
	printf("enter the piza  Quantity :  ");
	scanf("%d",&qut);
	
		if(cid==1||cid==2||cid==3||cid==4||cid==5||cid==6||cid==7||cid==8||cid==9||cid==10){
		x+=1000*qut-(10*(1000*qut)/100);
		n=1000*qut;
		printf("You are our loyel customer\n ");
		printf("Total - (discount(10/100))= %d",x);
		printf("\nSummery =%d - 10 presentage",n);
	}
		else{
		x+=1000*qut;
		n=1000*qut;
		printf("Amount = %d\n",n);	
		printf("All total = %d",x);
	}
}

else if(size =='l'||size == 'L'){
	printf("enter the piza  Quantity :  ");
	scanf("%d",&qut);
	
		if(cid==1||cid==2||cid==3||cid==4||cid==5||cid==6||cid==7||cid==8||cid==9||cid==10){
		x+=1500*qut-(15*(1500*qut)/100);
		n=1500*qut;
		printf("You are our loyel customer\n ");
		printf("Total - (discount(15/100))= %d",x);
		printf("\nSummery =%d - 15 presentage",n);
	}
	  	else{
		x+=1500*qut;
		n=1500*qut;
		printf("Amount = %d\n",n);
		printf("All total = %d",x);
	}
}
else if(size=='f'||size=='F'){
		printf("	TOTAL AMOUNT IS := %d",x);
		break;
}
else {
	printf("Invalid Type..!");	
}

}while(x!=2);


return 0;
}
