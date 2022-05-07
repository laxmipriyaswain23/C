#include<stdio.h>
int main()
{
	int a,s,i;
	for(a=1;a<=6;a++)
	{
		for(i=1;i<=a;i++)
		{
			if(a%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
	return 0;
}
