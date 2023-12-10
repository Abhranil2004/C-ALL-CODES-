// write a program to swap the values of two variables using a function.
#include<stdio.h>
void swappingvalues(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a,b;
	printf("Enter the value of first variable(a): ");
	scanf("%d",&a);
	printf("Enter the value of second variable(b): ");
	scanf("%d",&b);
	swappingvalues(&a,&b);
	printf("After swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}

//(* --> value at address operator)
//(& --> address of operator)
