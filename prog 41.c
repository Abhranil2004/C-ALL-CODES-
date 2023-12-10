// Write a program to swap values of two variables using third
//variable


#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
