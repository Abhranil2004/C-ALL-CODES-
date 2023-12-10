#include<stdio.h>
#include<conio.h>
void main()
{
	float n1,n2,sum,sub,mul,div;
	print("Enter two numbers: ");
	scanf("%f%f",&n1,&n2);
	sum= n1+n2;
	printf("%f+%f=%f",n1,n2,sum);
	sub=n1-n2;
	printf("%f-%f=%f",n1,n2,sub);
	mul=n1*n2;
	printf("%f*%f=%f",n1,n2,mul);
	div=n1/n2;
	printf("%f/%f=%f",n1,n2,div);
}
