#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	printf("%d\n",a&7);	
	if((a&7)==0)
		printf("divisible by 8\n");

	else printf("%d is not divisible by 8\n",a); 
	}


