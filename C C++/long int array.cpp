#include<stdio.h>
int main()
{
    long long int a,b[5],i,sum=0;
    scanf("%lld",&a);

    for(i=0;i<a;i++)
    {
        scanf("%lld",&b[i]);
    }

    for(i=0;i<a;i++)
    {
        sum+=b[i];
    }

    printf("%lld",sum);
}

