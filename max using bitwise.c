#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter 3 nos\n");
	scanf("%d%d%d",&a,&b,&c);
	
	max=a>b?a>c?a:c:b>c?b:c;
	printf("Max is %d",max);
	return 0;
}
