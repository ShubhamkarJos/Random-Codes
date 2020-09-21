#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,c;
	printf("Accept 2 numbers\n");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("%d",c);
	return 0;
}

gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}
