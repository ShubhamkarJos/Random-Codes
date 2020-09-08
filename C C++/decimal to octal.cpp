#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0,i=0;
	printf("Enter a decimal number\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%8;
		rem*=pow(10,i++);
		sum+=rem;
		n/=8;
		
	}
	
	printf("The octal form is %d",sum);
	
	
}
