#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],full_name[10];
	printf("enter name is %s",name);
	scanf("%s",name);
	printf("%s",name);
	
	getchar();
	printf("\nenter your full name : ");
	scanf("%[^\n]",full_name);
	printf("\n%s",full_name);
	return 0;
}
