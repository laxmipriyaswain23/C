//wap to print left half pyramid
#include<stdio.h>
int main()
{
	int num,i,j,space;
	printf("Enter number of rows\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(space=i;space<i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
