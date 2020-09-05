#include<stdio.h>
int main()
{
	int mat1[5][5],sp1[5][5],mat2[10][10],sp2[10][10],i,j,k,colm,rows,s=1,t=0,sp3[10][10];
	
	printf("\nEnter the dimensions of first matrix");
	scanf("%d%d",&rows,&colm);
	
	
	printf("Enter the elements of first matrix\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
		
	}
	
	printf("The given matrix is:\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("%d",mat1[i][j]);
		}
		printf("\n");
	}
	


	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			if(mat1[i][j]!=0)
			{
				
				sp1[s][0]=i;
				sp1[s][1]=j;
				sp1[s][2]=mat1[i][j];
				s++;
				
		 	}
		}
	}
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			if(mat1[i][j]!=0)
			{
				t++;
			}
		}
	}
		sp1[0][2]=t;
		sp1[0][0]=rows;
		sp1[0][1]=colm;
		
			
	printf("The sparse matrix is given by\n");
	
	for(i=0;i<s;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",sp1[i][j]);
		}
		printf("\n");
	}


	// Second Matrix program
	s=1;t=0;
	
	printf("Enter the elements of second matrix\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
		
	}
	
	printf("The given matrix is:\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			printf("%d",mat2[i][j]);
		}
		printf("\n");
	}
	


	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			if(mat2[i][j]!=0)
			{
				
				sp2[s][0]=i;
				sp2[s][1]=j;
				sp2[s][2]=mat2[i][j];
				s++;
				
		 	}
		}
	}
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<colm;j++)
		{
			if(mat2[i][j]!=0)
			{
				t++;
			}
		}
	}
		sp2[0][2]=t;
		sp2[0][0]=rows;
		sp2[0][1]=colm;
		
			
	printf("The sparse matrix is given by\n");
	
	for(i=0;i<s;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",sp2[i][j]);
		}
		printf("\n");
	}
	

	printf("The addition of the above 2 sparse matrices is:\n");
	i=0;
	j=0;
	k=0;
	if(sp1[0][0]==sp2[0][0]&&sp1[0][1]==sp2[0][1])
	{

		sp3[0][0]=rows;
		sp3[0][1]=colm;
	
		while(i<=sp1[0][2]&&j<=sp2[0][2])
		{
			if(sp1[i][0]==sp2[j][0])
			{
				if(sp1[0][1]==sp2[j][1])
				{
					sp3[k][0]=sp1[i][0];
					sp3[k][1]=sp1[i][1];
					sp3[k][2]=sp1[i][2]+sp1[j][2];
					k++;i++;j++;			
				}
				else if (sp1[i][1]<sp2[j][1])
				{
					sp3[k][0]=sp1[i][0];
					sp3[k][1]=sp1[i][1];
					sp3[k][2]=sp1[i][2];
					k++;i++;			
				}
				else
				{
					sp3[k][0]=sp1[i][0];
					sp3[k][1]=sp2[j][1];
					sp3[k][2]=sp2[j][2];
					k++;j++;
				}	
			
			}
			else if(sp1[i][0]<sp2[j][0])
			{
				sp3[k][0]=sp1[i][0];
				sp3[k][1]=sp1[i][1];
				sp3[k][2]=sp1[i][2];
				k++;i++;
			}
			else
			{
				sp3[k][0]=sp2[j][0];
				sp3[k][1]=sp2[j][1];
				sp3[k][2]=sp2[j][2];
				k++;j++;
			}
		}
		i=0;
		j=0;
		k=0;
		while(i<=sp1[0][2])
		{
			sp3[k][0]=sp1[i][0];
			sp3[k][1]=sp1[i][1];
			sp3[k][2]=sp1[i][2];
			i++;k++;
		}
		while(j<=sp2[0][2])
		{
			sp3[k][0]=sp2[i][0];
			sp3[k][1]=sp2[i][1];
			sp3[k][2]=sp2[i][2];
			j++;k++;
		
		}
		sp3[0][2]=k-1;
	}
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sp3[i][j]);
		}
		printf("\n");
	}
}
