#include<stdio.h>
int main()
{
	int a,sum=0,rev;
	printf("enter the number:");
	scanf("%d",&a);
	while(a!=0){
		rev=a%10;
		sum=sum+rev;
		a=a/10;
	}
    printf("%d",sum);
}
