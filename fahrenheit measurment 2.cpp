#include<stdio.h>
int main()
{
	float f,c;
	printf("enter the temp celsius : ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("temperature in fahrenheit : %f",f);
	return 0;
}
