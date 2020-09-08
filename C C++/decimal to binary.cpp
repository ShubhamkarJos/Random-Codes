#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,rem,p=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%2;
		rem*=pow(10,p++);
		sum+=rem;
		n/=2;
	
	}
	printf("%d",sum);
	
}
