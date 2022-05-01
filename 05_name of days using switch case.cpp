//write a c program to input week number(1-7)and print day of week name using switch case.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of the day from 1-7\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
		    printf("Tuesday");
		    break;
		case 3:
		    printf("Wednesday");
		    break;
		case 4:
			printf("Thrusday");
			break;
		case 5:
		    printf("Friday");
			break;
		case 6:
		    printf("Saturday");
			break;
		case 7:
		    printf("Sunday");
			break;
		default:
		    printf("Please enter a valid number");
			break;				
	}
	return 0;
}
