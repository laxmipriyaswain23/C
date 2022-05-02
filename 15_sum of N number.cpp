//wap the sum of N natural number.
#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Total of the numbers from 0 to entered are %d",sum);
	return 0;
}
