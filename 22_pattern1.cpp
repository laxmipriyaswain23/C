#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=5;i++)
		{
			if(a==1 || a==5)
			{
				printf("*");
			}
			else if(i==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
