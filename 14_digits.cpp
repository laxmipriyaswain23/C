//wap the number of digits in an integer.
#include<stdio.h>
int main()
{
	int number;
	int count=0;
	printf("Enter a number:");
	scanf("%d",&number);
	while(number!=0)
	{
		number/=10;
		++count;
	}
	printf("The number of digits in the enter number is:%d",count);
	return 0;
}
