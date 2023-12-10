//12>Write a program to calculate the sum of the digit which are divisible by 3 but not divisible by 9.

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
		if(r%3==0 && r%9!=0)
		{
			s=s+r;
		}
		t=t/10;
	}
	printf("The sum of the digit of %d which are divisible by 3 but not divisible by 9 is %d",n,s);
}
