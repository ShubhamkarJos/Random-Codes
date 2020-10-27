
#include<stdio.h>
#include<conio.h>



int main()
{
	int a[10][10],b[10][3],c[10][3],m,n,i,j,s=1,t=0,k,total,index;
	int value;
	
	
	printf("\nEnter the dimensions of sparse matrix\n");
	scanf("%d\n%d",&m,&n);
	
	printf("Enter the elements of sparse matrix\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	
	printf("The given matrix is:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				
				b[s][0]=i;
				b[s][1]=j;
				b[s][2]=a[i][j];
				s++;
				
		 	}
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				t++;
			}
		}
	}
		b[0][2]=t;
		b[0][0]=m;
		b[0][1]=n;
	
	printf("The sparse matrix is given by\n");
	
	for(i=0;i<s;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	
		

	
	
	
		c[0][0]=b[0][1];
		c[0][1]=b[0][0];
		c[0][2]=b[0][2];
	
		k=1;
		n=b[0][2];
	
		for(i=0;i<b[0][1];i++)
		{
			for(j=1;j<=n;j++)
			if(i==b[j][1])
			{
				c[k][0]=i;
				c[k][1]=b[j][0];
				c[k][2]=b[j][2];
				k++;
			 
			}

		}
	
		printf("\nThe transpose of the given sparse matrix is\n");
	
		for(i=0;i<k;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d",c[i][j]);
				
			}
			printf("\n");
		}
	
}
	
	

/*

#include<stdio.h>

int main()
{

int mat[5][5], spa[10][3], trans_spa[10][3], row, col, i, j, k=1, count=0, index[5]={0,0,0,0,0}, freq[5]={0,0,0,0,0};

printf("Enter the dimesions of input matrix, rows and col =\n");
scanf("%d%d",&row,&col);

//Input Matrix
printf("\nEnter the elements here:\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++) scanf("%d",&mat[i][j]);
}

//Display Matrix
printf("\nYour matrix is:\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d ",mat[i][j]);
if(mat[i][j]!=0) count++;
}
printf("\n");
}


//Processing sparse
spa[0][0] = row;
spa[0][1] = col;
spa[0][2] = count;

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(mat[i][j]!=0)
{
spa[k][0]=i;
spa[k][1]=j;
spa[k][2]=mat[i][j];
k++;
}
}
}


//Displaying Sparse
printf("\n\nSparse Matrix is:\n");
for(i=0;i<=count;i++)
{
for(j=0;j<3;j++) printf("%d ",spa[i][j]);
printf("\n");
}


//Processing Frequency Matrix
j=0;
for (i=1; i<=count; i++)
{
j=spa[i][1];
freq[j]++;
}


//Processing Index Matrix
index[0]=1;
for (i=1; i<col; i++)
{
index[i]=index[i-1]+freq[i-1];
}


//Processing Fast Transpose
trans_spa[0][0] = spa[0][1];
trans_spa[0][1] = spa[0][0];
trans_spa[0][2] = spa[0][2];

k=j=0;
for (i=1; i<=count; i++)
{
j = spa[i][1];
k = index[j];
trans_spa[k][0] = spa[i][1];
trans_spa[k][1] = spa[i][0];
trans_spa[k][2] = spa[i][2];
index[j]++;
}

//for (i=0; i<col; i++) printf("%d ",index[i]);

printf("\n\nFast Transpose of Sparse Matrix is:\n");
for(i=0;i<=count;i++)
{
for(j=0;j<3;j++) printf("%d ",trans_spa[i][j]);
printf("\n");
}


return 0;
}



*/

