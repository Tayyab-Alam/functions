#include<stdio.h>
int swap(int num1,int num2)
{
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("after swapping of n1 = %d\n",num1);
	printf("after swapping of n2 = %d\n",num2);
	return num1,num2;
	
}
int main()
{
	int n1,n2,result;
	printf("enter two numbers");
	scanf("%d %d",&n1,&n2);
	printf("before swapping n1=%d\n",n1);
	printf("before swapping n2=%d\n",n2);
	result=swap(n1,n2);

}
