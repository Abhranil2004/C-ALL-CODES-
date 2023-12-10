// write a program to perform the arithmetic operations '+','-','*' and '/' using switch case statement.

#include<stdio.h>
void main()
{
	float num1,num2,result;
	int ch;
	printf("----MENU----\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
	printf("\nEnter your choice(1/2/3/4/5): ");
	scanf("%d",&ch);
	if(ch>=1 && ch<=4)
	{
		printf("Enter a number: ");
		scanf("%f",&num1);
		printf("Enter another number: ");
		scanf("%f",&num2);
	}
	switch(ch)
	{
		case 1:
			printf("%f+%f=%f",num1,num2,num1+num2);
			break;
		case 2:
			printf("%f-%f=%f",num1,num2,num1-num2);
			break;
		case 3:
			printf("%f*%f=%f",num1,num2,num1*num2);
			break;
		case 4:
			printf("%f/%f=%f",num1,num2,num1/num2);
			break;
		case 5:
			break;
		default:
			printf("Wrong choice, please try again");
	}
}
