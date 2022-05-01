//WAP to check whether the user can get a driving licence or not.
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	if(age>=18 && age<=60)
	{
		printf("You can have a driving license");
	}
	else
	{
		printf("You are below 18 or above 60 and cant have a driving license");
	}
	return 0;
}
