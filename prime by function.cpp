#include<stdio.h>
int prime(int num){
	int p=0;
	for(int i=2;i<=num/2;i++)
{
		if(num%i==0) {
			p=1;
		break;
		 }
 
 }
 
 return p;}
int main()
{
	int num,p;
	printf("enter a number : ");
	scanf("%d",&num);
	p=prime(num);
	if(p==1)
	printf("the number %d is not prime",num);
	else
	printf("the number %d is prime",num);
}
