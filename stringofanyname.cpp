#include<stdio.h>
int main()
{
	char name[10],full_name[10],address[30];
	printf("enter your name : ");
	scanf("%s",name);
	printf("my name is : %s\n",name);
	printf("enter full name : ");
	scanf(" %[^\n]",full_name);
	
	printf("enteer full address :");
	scanf("%s",address);
	return 0;
}
