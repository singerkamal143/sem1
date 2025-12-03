#include<stdio.h>
int main()
{
	int i,j,n,ar[10],found;
	printf("enter the n values :");
	scanf("%d",&n);
	printf("enter the number of arrays");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				for(k=0;k<i;k++)
				{
					if(a[k]==a[i])
					break;
				}
				if(k==i)
				{
					printf("%d",a[i]);
					found =1;
				}
				break;
			}
			
		}
		
	}
	   
	
	return 0;
}
