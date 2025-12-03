#include<stdio.h>
int main()
{
	char s[50],i;
	int v=0,c=0,d=0,sp=0;
	printf("eter one sentence :");
	fgets(s,sizeof(s),stdin);
	printf("given sentence is : %s\n",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			v++;
		}
		else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
		{
			c++;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			d++;
		}
		else if(s[i]==' ')
		{
			sp++;
		}
	}
	printf("no of vowel :%d\n",v);
	printf("no of consonants :%d\n",c);
	printf("no of digits :%d\n",d);
	printf("no of space :%d\n",sp);
}
