#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a==3 && i==3)
			{
				printf("0");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
