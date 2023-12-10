// write a program to print the odd numbers from 1 to 20 using while loop.

#include<stdio.h>
void main()
{
	int num=1;
	while(num<=20)
	{
		if(num %2 !=0)
		{
			printf("%d\n",num);
		}
		num++;
	}
	
}
