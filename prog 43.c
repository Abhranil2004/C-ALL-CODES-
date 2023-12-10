//Write a menu driven program in C to perform addition, subtraction, division and multiplication of two numbers.


#include<stdio.h>
#include<stdlib.h>
void main()
{
	int choice;
	float num1,num2,result;
	while(1)
	{
		printf("Menu:\n");
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("5.Exit\n");
		printf("Enter your choice(1/2/3/4/5): ");
		scanf("%d",&choice);
		if (choice>=1&&choice<=4)
		{
			printf("Enter two numbers: ");
			scanf("%f%f",&num1,&num2);
		}
		
		switch(choice)
		{
			case 1: 
				result=num1+num2;
				printf("Result:%f\n",result);
				break;
			
			case 2:
				result=num1-num2;
				printf("Result:%f\n",result);
				break;
			
			case 3:
				result=num1*num2;
				printf("Result:%f\n",result);
				break;
				
			case 4:
				if(num2!=0)
				{
					result=num1/num2;
					printf("Result:%f\n",result);
			
			    }
			    else
				{
					printf("Error:Division by zero\n");
					
				}
				break;
			case 5:
				exit(0);	
			default:
				printf("Invalid choice\n");
		}
	}
}
