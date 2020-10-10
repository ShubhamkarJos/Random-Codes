#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,n;
	
	printf("Enter the elments of the array a32\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	printf("Enter the elments of the array b23\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);	
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			c[i][k]=0;
			for(j=0;j<3;j++)
			{
				c[i][k]+=a[i][j]*b[j][k];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d",c[i][k]);
		}
		printf("\n");
	}
}
