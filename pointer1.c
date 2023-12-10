#include<stdio.h>
void main()
{
	int a,*b; //(*b --> Is a pointer variable)
	a=5;
	b=&a;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",b);
	printf("%u\n",&b);
	printf("%d\n",*b);
	printf("%d\n",*(&a));
}
