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



printf("\n\nFast Transpose of Sparse Matrix is:\n");
for(i=0;i<=count;i++)
{
for(j=0;j<3;j++) printf("%d ",trans_spa[i][j]);
printf("\n");
}


return 0;
}

