//write a c program to input number from user and check whether the number is even ot odd using switch case.
#include<stdio.h>
int main()
{
	int m;
	printf("Enter a number\n");
	scanf("%d",&m);
	switch(m%2)
	{
		case 0:
			printf("The number is even");
			break;
		case 1:
		    printf("The number is odd");
			break;	
	}
	return 0;
}
