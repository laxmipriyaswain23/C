#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible for vote\n");
	}
	else
	{
		printf("You are not eligible for vote\n");
	}
	return 0;
}
