//write a program in c to check a number is binary
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n%10==0||n%10==1)
	{
		printf("BINARY NUMBER\n");
	}
	else{
		printf("NOT A BINARY\n");
	}
	return 0;
}
