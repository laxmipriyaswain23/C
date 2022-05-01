//c program to enter student marks and find percentage and grade
#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5;
	int total;
	float percentage;
	printf("Enter the marks of 5 subjects");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	total=n1+n2+n3+n4+n5;
	percentage=(total/5);
	printf("The total marks is %d\n",total);
	printf("The percentage is %f\n",percentage);
	if(percentage>=90)
	    printf("O grade");
	else if(percentage>=80 && percentage<90)
    	printf("E grade");
	else if(percentage>=70 && percentage<80)
	    printf("A grade");
	else if(percentage>=60 && percentage<70)
	    printf("B grade");
	else if(percentage>=50 && percentage<60)
	    printf("C grade");
	else if(percentage>=40 && percentage<50)
	    printf("D grade");
	else
	    printf("Fail");				 
	return 0;
}
