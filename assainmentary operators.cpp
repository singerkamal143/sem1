#include<stdio.h>
int main()
{
	int a=3;
	int b=5;
	printf("assaign a value to b:%d\n",a=b);
	printf("add b value to a and stores in a:%d\n",a+=b);
	printf("subtract b value from a and stores in a:%d\n",a-=b);
	printf("multiply b value with a and stores in a:%d\n",a*=b);
	printf("done divide and quotient stores in a:%d\n",a/=b);
	printf("done divide and remainder stores in a:%d\n",a%=b);
	return 0;
}
