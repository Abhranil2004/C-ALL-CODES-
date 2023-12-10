//Q1) write a program to add two numbers using a function(with user inputs).
#include<stdio.h>
int addnumbers(int a,int b)
{
	int sum = a + b;
	return sum;
}
int main()
{
	int number1, number2,sum;
	printf("Enter the first number: ");
	scanf("%d",&number1);
	printf("Enter the second number: ");
	scanf("%d",&number2);
	sum = addnumbers(number1, number2);
	printf("The sum of the two numbers is:%d\n",sum);
	return 0;
}

