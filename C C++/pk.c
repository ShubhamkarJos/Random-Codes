#include<stdio.h>
void main(){
	int a[100][100],sparse[10][10],row,col,i,j,ctr=1,n=0;
	printf("Enter dimensions of sparse matrix\n");
	scanf("%d\n%d",&row,&col);
	printf("Enter sparse matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
				scanf("%d",&sparse[i][j]);
		}
	}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{	
				if(sparse[i][j]!=0)
				{
			
					n++;
			
				}
			}
		}
	

	
	
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(sparse[i][j]!=0)
				{
					a[ctr][0]=i;
					a[ctr][1]=j;
					a[ctr][2]=sparse[i][j];			
					ctr++;
				
				}
		
			}
			
	a[0][0]=row;
	a[0][1]=col;
	a[0][2]=n;
	
	}
		for(i=0;i<ctr;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		
		}
	printf("\n");
}
}
