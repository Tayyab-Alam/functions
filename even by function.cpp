#include<stdio.h>
int even(int num1)
{
	if (num1%2==0)
	printf("%d you entered is even number\n",num1);
	else 
	printf("%d you entered is odd number\n",num1);
}
int main()
{
	int n1,result;
	printf("enter the number");
	scanf("%d",&n1);
	result=even(n1);
	
}
