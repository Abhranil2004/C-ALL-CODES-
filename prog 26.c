// write a program to find the sum of the numbers from 1 to 10 using for loop.

#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum +=i;	
	}
	printf("The sum of numbers from 1 to 10 is %d\n",sum);
}
