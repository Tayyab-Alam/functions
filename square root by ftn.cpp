#include<stdio.h>
#include<math.h>
float power(float a)
{
	float p=sqrt(a);
	return p;
}
int main()
{
	float num;
	printf("enter number\n");
	scanf("%f",&num);//9
	float p=power(num);
	printf("%.2f",p);
}
