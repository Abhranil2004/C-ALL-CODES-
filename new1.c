//6. Write a C program to determine eligibility for admission to a professional course based on the following criteria: 
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
//Expected Output :
//The candidate is not eligible for admission.

#include<stdio.h>
int main()
{
	int maths,phys,chem,total,totalmathphys;
	printf("Input the marks obtained in Physics: ");
	scanf("%d",&phys);
	printf("Input the marks obtained in Chemistry: ");
	scanf("%d",&chem);
	printf("Input the marks obtained in Mathematics: ");
	scanf("%d",&maths);
	total=maths+phys+chem;
	totalmathphys=maths+phys;
	if((maths>=65 && phys>=55 && chem>50 && total>=190)||totalmathphys>=140)
	{
		printf("The candidate is eligible.\n");
	}
	else
	{
		printf("The canditate is not eligable.\n");
	}
	return 0;
	
}

