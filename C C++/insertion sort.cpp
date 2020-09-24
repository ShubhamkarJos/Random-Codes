#include<stdio.h>
int main()
{
	int i,j,ele,size,a[10];
	 printf("Enter size\n");
	 scanf("%d",&size);
	 
	 printf("enter the elements of array\n");
	 
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 for(i=1;i<size;i++)
	 {
	 	ele=a[i];
	 	for(j=i-1;a[j]>ele&&j>=0;j--)
	 	{
	 		a[j+1]=a[j];
		}
		a[j+1]=ele; 
	 	
	 }
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
}
