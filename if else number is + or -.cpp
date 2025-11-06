#include<stdio.h>
int main()
{
	int number;
	printf("enter a number : ");
	scanf("%d",&number);
	if(number>0)
	{
		printf("%d is a positive number",number);
	}
	else
	if(number<0)
	{
		printf("%d is a negative number",number);
	}else if(number=0)
	{
	printf("%d is a neutral number");}

	return 0;
}
