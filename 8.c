//8> write a program to calculate the sum of digits of a number.

#include<stdio.h>
void main()
{
	int r,n,t,sum=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		sum=sum+r;
		t=t/10;
	}
	printf("The sum of the digits of %d is %d",n,sum);
}
