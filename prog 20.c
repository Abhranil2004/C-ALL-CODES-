// write a program to check whether a number is even or odd using switch-case statement.

#include<stdio.h>
void main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	switch(number %2)
	{
		case 0:
			printf("%d is even",number);
			break;
		case 1:
			printf("%d is odd",number);			
	}
}

