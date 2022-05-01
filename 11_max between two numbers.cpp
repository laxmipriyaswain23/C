//write a c program to find maximum between two numbers using switch case
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two number to find maximum");
	scanf("%d %d",&n1,&n2);
	switch(n1>n2)
	{
		case 0:
			printf("%d is maximum",n2);
			break;
		case 1:
		    printf("%d is maximum",n1);
			break;	
	}
	return 0;
}
