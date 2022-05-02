//wap c program to calculate tax on a salary.
#include<stdio.h>
int main()
{
	int salary;
	double tax;
	printf("Enter salary of a person");
	scanf("%d",&salary);
	if(salary<10000)
	{
		printf("No tax");
	}
	else if(salary>10000 && salary<100000)
	{
		tax=0.10;
		printf("%lf",tax);
	}
	else if(salary>100000 && salary<1000000)
	{
		tax=0.25;
		printf("%lf",tax);
	}
	else if(salary>1000000 && salary<1500000)
	{
		tax=0.40;
		printf("%lf",tax);
	}
	else
	{
		tax=0.65;
		printf("%lf",tax);
	}
	return 0;
}
