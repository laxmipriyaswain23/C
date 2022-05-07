#include<stdio.h>
int main()
{
	int a,i,s;
	for(a=1;a<=5;a++)
	{
		for(s=1;s<=(5-a);s++)
		{
			printf(" ");
		}
		for(i=1;i<=(2*a-1);i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
