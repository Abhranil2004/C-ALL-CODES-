//14> write a c program to add first and last digit of a number.

#include<stdio.h>
void main()
{
	int n,n1,n2,sum;
	printf("Enter number: ");
	scanf("%d",&n);
	n2=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	n1=n;
	sum=n1+n2;
	printf("The sum is: %d",sum);
}
