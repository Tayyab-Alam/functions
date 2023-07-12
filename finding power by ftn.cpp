#include<stdio.h>
#include<math.h>
int power(int num1,int num2)
{
	pow(num1,num2);
	int p=	pow(num1,num2);
	return p;
}
int main()
{
	int base,power,result;
	printf("enter base\n");
	scanf("%d",&base);
	printf("enter power\n");
	scanf("%d",&power);
	result=pow(base,power);
	printf(" the power of %d is %d and its result is %d ",base,power,result);
}

