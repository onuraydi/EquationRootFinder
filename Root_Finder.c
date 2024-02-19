#include<stdio.h>
#include<math.h>

//Write a C program to print the roots of Bhaskara’s formula from the given three
//floating numbers. Display a message if it is not possible to find the roots.

int main()
{
	float a, b, c;
	float delta;  		//b^2 - 4.a.c
	float root1,root2;
	printf("Input the a: ");	scanf("%f",&a);
	printf("Input the b: ");	scanf("%f",&b);
	printf("Input the c: ");	scanf("%f",&c);
	
	delta = ((b*b)-(4*a*c));
	
	if(delta < 0)
	{
		printf("No reel root!\n");
		return 0;
	}
	else if(delta == 0)
	{
		printf("has only one root.\n");
		
		root1 = (-b + sqrt(delta)) / (2*a);
		root2; 
	}
	else
	{
		printf("Has two roots.\n");
		
		root1 = (-b + sqrt(delta)) / (2*a);
		root2 = (-b - sqrt(delta)) / (2*a);
	}
	
	printf("root1 = %.2f\n",root1);
	printf("root2 = %.2f\n",root2);
	
	return 0;
}
