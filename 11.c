//11> Write a c program to print the reverse of a number.

#include<stdio.h>
void main()
{
	int r,n,t,s=0;
	printf("Enter number: ");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		s=s*10+r;
		t=t/10;
	}
	printf("Reverse number of %d is %d",n,s);
}
