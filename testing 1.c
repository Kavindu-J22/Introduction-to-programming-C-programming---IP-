 #include<stdio.h>

int main(void)
{
	int x,y,z,month,date,r,t,k,m;
	int age,mark;
	char name[50];
	char mname[50];
	char fname[50];
	
printf("                                                             - WELLCOME TO 'JAYPER' OFFICIAL COMPANY -                                                  ");
printf("                                                                 ********************************************                                               ");
printf("\nEnter your birth Year,Month,Date(ex:- 2002.01.22) :");
 scanf("%d.%d.%d",&age, &month, &date);
 y = 2022;
 r = 4;  // month
 t = 19; // date
 k = 12;
 m = 31;
 
  if(age>2021){
 	printf("\nplease chek! this is only our guess!! \n\tPLEASE!! go to back and ENTER THE VALID BIRTH DAY DETAILS(error: Year)");
 	age   = 0;
 	month = 0;
 	date  = 0;
 } 
   if(month > 12){
 	printf("\nplease chek! this is only our guess!! \n\tPLEASE!! go to back and ENTER THE VALID BIRTH DAY DETAILS(error: Month)");
 	age   = 0;
 	month = 0;
 	date  = 0;
 } 
   if(date > 31){
 	printf("\nplease chek! this is only our guess!! \n\tPLEASE!! go to back and ENTER THE VALID BIRTH DAY DETAILS(error: date)");
 	age   = 0;
 	month = 0;
 	date  = 0;
 } 
 if(date<= 0 || month <=0|| age<=0){
 	printf("\nplease chek! this is only our guess!! \n\tPLEASE!! go to back and ENTER THE VALID BIRTH DAY DETAILS(error: dd/mm/yy)");
 	age   = 0;
 	month = 0;
 	date  = 0;
}
 
 if (month == r && date == t){
 	printf("\n\toooh!! HAPPY BRITH DAY!! ");
 }
 
 if(age == 2020 && month == 6 && date == 29 ){
 	age = 1;
 	month = 0;
 	date = 0;
 }
 
 else if(age == 2020 && 12 >= month && r<= month && 31>= date && t<= date){
 	age = 0;
 	month = ((k - month)+r) - 1;
 	date = (t - date) + date ;
 }
   else if(age == 2020 && 12 >= month && r<= month && t> date && 1<= date){
 	age = 0;
 	month =((k - month)+r);
 	date = t - date;
 }
 else if(age == 2021 && month == r && date == t){
 	printf("you are borned today!!");
 	age = 0;
 	month = 0;
 	date = 0;
 }
 else if(age == 2021 && r >= month && 1<= month && t>= date && 1<= date){
 	age = 0;
 	month = r - month;
 	date = t - date;
 }
 else if(age == 2021 && r >= month && 1<= month && 31>= date && t< date){
 	age = 0;
 	month = r - month;
 	date = (t - date) + date ;
 }
  else if(age <= 2020 && r >= month && 1<= month && t>= date && 1<= date){
 	age = (y - age);
 	month = r - month;
 	date = t - date;
 }
  else if(age <= 2020 && r >= month && 1<= month && 31>= date && t< date){
 	age = (y - age);
 	month =(r - month) - 1;
 	date = (t - date) + date;
 }
 else if(age < 2020 && month == r && t>= date && 1<= date){
 	age = y - age;
 	month =r - month;
 	date = t - date;
 }
  else if(age <= 2020 && 12 >= month && r< month && t>= date && 1<= date){
 	age =( y - age) - 1;
 	month =((k - month)+r);
 	date = t - date;
 }
  else if(age <= 2020 && 12 >= month && r< month && 31>= date && t< date){
 	age = (y - age) - 1;
 	month =((k - month)+r) - 1;
 	date = (t - date) + date;
 }
  
  printf("\nyour age is :\n\tyear = %d \n\tmonths = %d \n\tDays = %d ",age,month,date);
 
 if (age>=0&& age <=150){
 
	if(0<=age&&age<=11){
			printf("\n\nyou are children now");	
			printf("\n bye!! see you later.\n Have a great future!!");	
		}
		else if(100 >=age && age>=50){
			printf("\n\nyou are old person");
			printf("\nBecause, we can't register you.verry sory for that.\n good luck'!!");

		}
	else{
	if(age<=50)
	{
		if(12<=age&&age<=18){
			printf("\n\nHello teenager!!");
			printf("\nteenager please enter your frist name : ");
			scanf("%s",&name);
		    printf("\n%s please enter your mid name : ",name);
			scanf("%s",&mname);
			printf("\n%s please enter your last name : ",name);
			scanf("%s",&fname);
			}
			
		else if(19<=age&&age<=30){   
		    printf("\n\nHello younger!!");
		    printf("\nyounger please enter your frist name : ");
			scanf("%s",&name);
			printf("\n%s please enter your mid name : ",name);
			scanf("%s",&mname);
			printf("\n%s please enter your last name : ",name);
			scanf("%s",&fname);
			}
		
	    else if(31<=age){
			printf("\n\nHello midager!!");
			printf("\nmidager please enter your frist name : ");
			scanf("%s",&name);
			printf("\n%s please enter your mid name : ",name);
			scanf("%s",&mname);
			printf("\n%s please enter your last name : ",name);
			scanf("%s",&fname);
		   }
			 
  }
      	printf("\nWELLCOME TO OUR COMPANY!!.\n%s please enter your final exam marks : ",name);
			scanf("%d",&mark);
			if(mark>=20){
				
				if(20<=mark && mark<=35){
					printf("%s you are pass our exam!!",name);
					printf(" in 'S' pass");
				}
				else if(36<=mark && mark<=59){
					printf("%s you are pass our exam!!",name);
					printf(" in 'C' pass");
				}
				else if(60<=mark && mark<=74){
					printf("%s you are pass our exam!!",name);
					printf(" in 'B' pass");
				}	
				else if(75<=mark && mark<=100){
					printf("%s you are pass our exam!!",name);
					printf(" in 'A' pass");
				}
				else if(100<mark){
					printf("%s INVALID EXAM MARK!!",name);
				}
						
			}
		   else{
		   	 printf("sorry!!.%s you are fail our exam.please try to next time",name);
		   }
			
	  }
	  
}
 else if(300 >= age&& 100 < age ){
 	printf("  oh my good!! you are verry old person,Sorry..Try to next soul,\ngood luck!!");
 }
 else{
 	printf("\nplease chek! this is only our guess!! \n\tPLEASE!! go to back and ENTER THE VALID BIRTH DAY DETAILS");
 }
	
		
	
	
			return 0;
	}
	
	
	

