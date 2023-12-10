

#include<stdio.h>
#include<math.h>
int main()
{
		float H,b,p;
		printf("Enter the value of b: ");
		scanf("%f",&b);
		printf("Enter the value of p: ");
		scanf("%f",&p);
		H=sqrt(b*b)+p*p;
		printf("H=%f",H);
}
