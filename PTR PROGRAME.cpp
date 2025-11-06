#include<stdio.h>
int main()
{
	int p,t,r,si;
	p=t=r=si=0;
	printf("enter principle amount : ");
	scanf("%d",&p);
	printf("enter time : ");
	scanf("%d, &t");
	printf("enter rate of interest : ");
	scanf("%d", &r);
	si=(p*t*r)/100;
	printf("  intrest for rs.%din %d years is:%d rs",p,t,si);
	return 0;
}
