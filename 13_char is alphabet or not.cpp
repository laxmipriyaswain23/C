//wap the character is an alphabet or not
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if((ch>=97 && ch<=122)||(ch>=65 && ch<=90))
	{
		printf("The entered character is a alphabet");
	}
	else{
		printf("The entered character is not an alphabet");
	}
	return 0;
}

