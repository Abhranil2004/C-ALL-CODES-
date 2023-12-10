// write a program to find the product of the numbers from 1 to 10 using for loop.

#include<stdio.h>
void main()
{
	int i,product=1;
	for(i=1;i<=10;i++)
	{
		product*=i;
	}
	printf("The product of the numbers from 1 to 10 is %d\n",product);
}
