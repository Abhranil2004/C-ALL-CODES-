//write a c program to check whether a number is prime or not using a function.
#include<stdio.h>
int isprime(int num)
{
	int i;
	if(num<=1)
	{
		return 0;
	}
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			return 0;	
		}
		return 1;
	}
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if (isprime(num))
	{
		printf("%d is a prime number.\n",num);
	}
	else
	{
		printf("%d is not a prime number.\n",num);
	}
	
}

