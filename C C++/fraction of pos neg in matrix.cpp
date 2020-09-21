#include<stdio.h>
int main()
{
	int a[100],i;
	float j,p=0,q=0,r=0,n;
	
	scanf("%f",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			p++;
		}
		else if(a[i]<0)
		{
			q++;
		}
		else if(a[i]>0)
		{
			r++;
		}
	}
	
	printf("%f",r/n);
		printf("%f",q/n);
			printf("%f",p/n);
}
