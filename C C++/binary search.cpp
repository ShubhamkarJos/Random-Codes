#include<stdio.h>
int main()
{
	int a[10],first,last,middle,n,i,search,temp,pass,j;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements of arrrraayyyy\n");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		
	}
	
	
	printf("Enter a number\n");
	scanf("%d",&search);
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
	first=0;
	last=n-1;
	middle=(first+last)/2;
	
	
	while(first<=last)
	{
		
		if(a[middle]<search)
		first=middle+1;
		else if(a[middle]==search)
		{
			printf("%d found at location %d\n",search,middle+1);break;
		}

		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("\nNot found,%d isnt present in the list\n",search);
	
	return 0;
}
