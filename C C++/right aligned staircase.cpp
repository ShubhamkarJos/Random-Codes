#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	
	for(k=0;k<n;k++)
    {
    for(i=n-1;i>k;i--)
    {
      printf(" ");
    } 
    for(j=0;j<k+1;j++)
    printf("*");
    printf("\n");
    }   
    return 0;
}
