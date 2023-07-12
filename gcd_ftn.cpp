#include<stdio.h>
int gcd(int n, int m)
{
	if(n==0)
	{
		return m;
	}
	return gcd(m%n,n);
}
int main()
{
	int n,m;
	printf("enter two numbers");
	scanf("%d%d",&n,&m);
	printf("the gcd of %d and %d is %d",n,m,gcd(n,m));
	return 0;
}
