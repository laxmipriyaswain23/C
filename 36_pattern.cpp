#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=6;a++)
	{
		
		for(i=1;i<=5;i++)
		{
			if(a%2==0)
			{
				printf("*");
			}
			else{
				printf("@");
			}
		}
		printf("\n");
	}
	return 0;
}
