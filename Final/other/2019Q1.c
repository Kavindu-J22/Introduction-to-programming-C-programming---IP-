#include<stdio.h>
int main (void)
{
	int PType, Qty;
	char PSize, CCard, LCustomer, OnlineO;
	float BAmount = 0, Total = 0, BTotal = 0, Discount =0 , NAmount = 0; 
	
	printf("Enter Pizza Type : ");
	scanf("%d", &PType);
	
	while(PType != -1)
	{
		switch(PType)
		{
			case 1 : printf("Enter Pizza Size : ");
					 scanf(" %c", &PSize);
	
				   	if(PSize == 'L' || PSize == 'M')
					{
						printf("Number of Pizzas : ");
						scanf("%d", &Qty);
						
						if(PSize == 'L')
						{
							BAmount = (float)Qty*1720;
						}
						else
						{
							BAmount = (float)Qty*975;
						}	 
					}
					else 
					{
						printf("  Pizza Size is Invalid\n");
						puts("");
					}
					puts("");
					break;
					
			case 2 : printf("Enter Pizza Size : ");
					 scanf(" %c", &PSize);
	
				   	 if(PSize == 'L' || PSize == 'M')
					{
						printf("Number of Pizzas : ");
						scanf("%d", &Qty);
						
						if(PSize == 'L')
						{
							BAmount = (float)Qty*1820;
						}
						else
						{
							BAmount = (float)Qty*1000;
						}	 
					}
					else 
					{
						printf("  Pizza Size is Invalid\n");
						puts("");
					}
					puts("");
					break;
					
			default : printf("  Pizza Type is Invalid\n");
					  puts("");
		}
		Total = Total + BAmount ;
			
		printf("Enter Pizza Type : ");
		scanf("%d", &PType);	
	}
	
	BTotal = Total;
	
	puts("");
	printf("Are you paying by credit card (Y/N) ? ");
	scanf(" %c", &CCard);
	printf("Are you a loyalty customer (Y/N) ? ");
	scanf(" %c", &LCustomer);
	printf("Is this and online order (Y/N) ? ");
	scanf(" %c", &OnlineO);
	
	puts("");
	printf("Bill Amount - %.2f\n", BTotal);
	
	if(CCard == 'Y')
	{
		Discount = BTotal*20/100;
		NAmount = BTotal - Discount;
		
		printf("Discount - %.2f\n", Discount);
		printf("Net Amount - %.2f\n", NAmount);
	}
	else if(CCard == 'N' && LCustomer == 'Y')
	{
		Discount = BTotal*15/100;
		NAmount = BTotal - Discount;
		
		printf("Discount - %.2f\n", Discount);
		printf("Net Amount - %.2f\n", NAmount);
	}
	else if(CCard == 'N' && LCustomer == 'N' && OnlineO == 'Y')
	{
		Discount = BTotal*5/100;
		NAmount = BTotal - Discount;
		
		printf("Discount - %.2f\n", Discount);
		printf("Net Amount - %.2f\n", NAmount);
	}
	else
	{
		printf("Net Amount - %.2f\n", BTotal);
	}
	
	return 0;
}
