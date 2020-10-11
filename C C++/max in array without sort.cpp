#include<stdio.h>
int main()
{
	int a[10],i,n;
	
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	int max,min;

	printf("Enter the elements of array\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
		{
			if(a[i]>max)
			{
				
				max=a[i];
				
			}
				if(a[i]<min)
			{
				
			 	min=a[i];
			
			}
							
		}			
	
	printf("max is %d and min is %d",max,min);
}
