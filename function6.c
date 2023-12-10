// Q2) write a program to find the greater of two numbers using a function.

#include<stdio.h>
int findgreater(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int a,b,greater;
	printf("Enter two numbers to find the greater: ");
	scanf("%d %d",&a,&b);
	greater=findgreater(a,b);
	printf("The greater number is: %d",greater);
	return 0;
}
