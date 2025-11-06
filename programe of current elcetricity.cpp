#include<stdio.h>
int main()
{
	int units,amt;
	printf("enter number of units :");
	scanf("%d",&units);
   {
	   	if(units<=50)
	{
	
	amt=units*20;
	printf("amount of electricity bill is %d",amt);}
	
	else if(units<=100)
	{
	amt=units*30;
		printf("amount of electricity bill is %d",amt);
	}
	else if(units<=200)
	{
	amt=units*40;
	
	 printf("amount of electricity bill is %d",amt);
	}
	else if(units>200)
	{
	amt=units*50;
	
	    printf("amount of electricity bill is %d",amt);
     } }
	 return 0;
}

	
