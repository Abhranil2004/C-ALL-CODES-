//10> Write a c program to calculate the sumof even digits of a number.

#include<stdio.h>
void main()
{
	int n,r,t,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		if(r%2==0)
		{
			sum=sum+r;
		}
		t=t/10;
	}
	printf("The sum of even digits of %d is %d",n,sum);
}
