//check whether a number is positive,negative or zero using switch case
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	switch(n>0)
	{
		case 1:
			printf("The number is positive");
			break;
		case 0:
		if(n<0)
		{
			printf("The number is negative");
		}	
		else{
			printf("The number is zero");
		}
		break;
	}
	return 0;
}
