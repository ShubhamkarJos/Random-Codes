#include<stdio.h>
int main()
{
	int n,i,j,pass,temp;
	int a[10];
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) 
	{
	
	printf("%d\t",a[i]);
	}
	printf("\n");
	for(pass=1;pass<5;pass++)
	{
		for(i=0,j=i+1;i<n-pass;i++,j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	for(j=0;j<n;j++)
	printf("%d\t",a[j]);
	
	
}
