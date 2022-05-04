//write a c program to check a number is armstrong or not
#include<stdio.h>
int main()
{
	int n,r,temp;
	int sum=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n/=10;
	}
	if(sum==temp)
	{
		printf("The number is armstrong");
	}
	else{
		printf("The number is not armstrong");
	}
	return 0;
}
