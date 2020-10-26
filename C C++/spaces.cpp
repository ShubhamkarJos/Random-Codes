#include<Stdio.h>
int main()
{
	int i,j,ch,sp,n,spaces;
	printf("Enter number of rows\n");
	scanf("%d",&n);
	spaces=n-1;
	for(i=1;i<=n;i++)
	{
		ch=65;
		for(j=1;j<=i;j++)
		printf("%c",ch++);
		for(sp=1;sp<=2*spaces-1;sp++)
		printf(" ");
		spaces--;
		if(i==n)
		{
			ch--;
			//i--;
		}
		for(j=1;j<=i;j++)
		if (ch>65)printf("%c",--ch);
		printf("\n");
	}
}
