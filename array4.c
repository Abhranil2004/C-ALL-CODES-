//write a program to enter few integer values in an array and print those.

#include<stdio.h>
void main()
{
	int a[5],i;
	printf("Enter the elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("The elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
 } 
