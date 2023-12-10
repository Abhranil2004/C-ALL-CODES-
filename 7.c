//7> write a program to split a number into digits.


#include<stdio.h>
void main()
{
	int r,n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("The digits are: ");
	while(n>0)
	{
		r=n%10;
		printf("%d ",r);
		n=n/10;
	}
	
}

