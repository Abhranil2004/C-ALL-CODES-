// write a program to print the even numbers from 1 to 20 using for loop.

#include<stdio.h>
void main()
{
	int a;
	for(a=1;a<=20;a++)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}	
	}
}
