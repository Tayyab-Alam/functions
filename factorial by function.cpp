#include<stdio.h>

int cale_fact(int num)
{
	int fact=1;
	while(num>0)
	{
		fact = fact*num;
		num--;
	}
	return fact;
}
int main()
{
	int n1,f;
	printf("enter a number");
	scanf("%d",&n1);
	f=cale_fact(n1);
	printf("%d",f);
}
