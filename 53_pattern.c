#include<stdio.h>
int main()
{
	int a,s,i;
	for(a=1;a<=5;a++)
	{
		for(s=4;s>=a;s--)
		{
			printf(" ");
		}
		for(i=1;i<=a;i++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
