#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=4;a++)
	{
		for(i=1;i<=a;i++)
		{
			printf("1");
		}
		printf("\n");
	}
	for(a=3;a>=1;a--)
	{
		for(i=1;i<=a;i++)
		{
			printf("1");
		}
		printf("\n");
	}
	return 0;
}
