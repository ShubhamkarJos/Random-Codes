#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,**mat,sum=0,row,col,j,e;
	printf("Enter rows and columns\n");
	scanf("%d%d",&row,&col);
	
	mat=(int**)malloc(row*sizeof(int));
	
	for(i=0;i<row;i++)
	mat[i]=(int*)malloc(col*sizeof(int));
	
	printf("Enter the elements of the matrix\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	sum+=mat[i][i];		
	
	
	printf("The sum of diagonal elements is %d\n",sum);
		
}
