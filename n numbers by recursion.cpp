#include<stdio.h>
int f1(int n)
{
 if (n>=1)
    {
     f1(n-1);
    }
    printf("%d",&n);
}
 main()
{
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	f1(a);
}
