//write a program to reverse an integer in c.
#include<stdio.h>
int main()
{
	int num;
	int rem;
	int r=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		r=r*10+rem;
		num/=10;
    }
    printf("The reverse of the entered number is %d",r);
	return 0;
}
