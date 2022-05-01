//write a c program to create simple calculator using switch case
#include<stdio.h>
int main()
{
	int a,b,r=0;
	char c;
	printf("Enter the operator for operation on a and b\n");
	scanf("%c",&c);
	printf("Enter the number for a and b\n");
	scanf("%d %d",&a,&b);
	
	switch(c)
	{
		case '+':
			r=a+b;
			break;
		case '-':
		    r=a-b;
			break;
		case '*':
		    r=a*b;
			break;
		case '/':
		    r=a/b;
			break;
		case '%':
		    r=a%b;
			break;
		default:
		    printf("Enter a valid operation");
			break;					
	}
	printf("The result is %d",r);
	return 0;
}
