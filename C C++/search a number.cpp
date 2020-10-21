#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],i,j,flag=0;
	printf("Enter elements of array\n");
	for(i=0;i<5;i++)
	{
		printf("Enter element %d",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter a number\n");
	scanf("%d",&j);
	
	for(i=0;i<5;i++)
	{
		if(j==a[i])
		{
			printf("Element found at %d position\n",i+1);
			//flag=1;
			break;
		}
	}
	if (i==5) printf("Element not found\n");
}

