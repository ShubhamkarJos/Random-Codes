/*
#include<stdio.h>
int main()

{
	int a;
	printf("Enter a single digit number\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1: 
		printf("January\n");
		break;
		case 2: 
		printf("Feb\n");
		break;
		case 3: 
		printf("Mar\n");
		break;
		case 4: 
		printf("April\n");
		break;
		case 5: 
		printf("May\n");
		break;
		case 6: 
		printf("June\n");
		break;
		case 7: 
		printf("July\n");
		break;
		case 8: 
		printf("Birthday\n");
		break;
		case 9: 
		printf("Sept\n");
		break;
		case 10: 
		printf("Oct\n");
		break;
		default:
		printf("Invalid Number\n");
		
	}
	return 0;
}
*/
/*
{
	int a,b,c,max;
	printf("Enter 3 integers\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a:b;
	max=max>c?max:c;
	printf("The max is %d",max);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum=0;
	printf("Enter 5 Numberes\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a%2!=0)
	{
		sum=sum+a;
	}
	if(b%2!=0)
	{
		sum=sum+b;
	}
	if(c%2!=0)
	{
		sum=sum+c;
	}
	if(d%2!=0)
	{
		sum=sum+d;
	}
	if(e%2!=0)
	{
		sum=sum+e;
	}
	printf("Sum of the odd numbers is %d",sum);
	return 0;
}
*/
#include <stdio.h>
int main()
{
    int amount;
    int n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    
    n2000=n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
    
    print("Enter amount=\n");
    scanf("%d",&amount);   
    if(amount>=2000)
    {
    	n2000=amount/2000;
    	amount=amount-2000*n2000;
	}

	if(amount>=500)
	{
		n500=amount/500;
		amount=amount-500*n500;
	}
	
	if(amount>=200)
	{
		n200=amount/200;
		amount=amount-200*n200;
	}
	
	if(amount>=100)
	{
		n100=amount/100;
		amount=amount-100*n100;
	}
	
	if(amount>=50)
	{
		n50=amount/50;
		amount=amount-50*n50;
	}
	
	if(amount>=20)
	{
		n20=amount/20;
		amount=amount-20*n20;
	}
	
	if(amount>=10)
	{
		n10=amount/10;
		amount=amount-10;
	}
	
	if(amount>=5)
	{
		n5=amount/5;
		amount=amount-5;
	}
	
	if(amount>=2)
	{
		n2=amount/2;
		amount=amount-2;
	}
	
	if(amount>=1)
	{
		n1=amount;
	}
	printf("Notes of 2000=%d",n2000);
	printf("Notes of 500=%d",n500);
	printf("Notes of 200=%d",n200);
	printf("Notes of 100=%d",n100);
	printf("Notes of 50=%d",n50);
	printf("Notes of 20=%d",n20);
	printf("Notes of 10=%d",n10);
	printf("Notes of 5=%d",n5);
	printf("Notes of 2=%d",n2);
	printf("Notes of 1=%d",n1);
	
	return 0;
	
	}
	











