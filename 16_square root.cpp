//write a c program to find the square root of a given number.
#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	printf("Enter a number to find root");
	scanf("%lf",&num);
	root=sqrt(num);
	printf("Square root of %.2lf=%.2lf",num,root);
	return 0;
}
