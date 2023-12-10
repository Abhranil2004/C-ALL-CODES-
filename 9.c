//9> write a c program to calculate the sum of odd digits of a number.

#include<stdio.h>
void main()
{
	int r,n,t,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		if(r%2!=0)
		{
			sum=sum+r;
		}
		t=t/10;
	}
	printf("The sum of odd digits of %d is %d",n,sum);
}
