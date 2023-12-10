// V=u+at

#include<stdio.h>
void main()
{
		int V,u,a,t;
		printf("Enter value of u: ");
		scanf("%d",&u);
		printf("Enter value of a: ");
		scanf("%d",&a);
		printf("Enter value of t: ");
		scanf("%d",&t);
		V=u+a*t;
		printf("V=%d",V);
}
