//wap to convert the number of days into years,months,day(like-3000days=8 years 2 months 20 days)
#include<stdio.h>
int main()
{
	int ndays,y,m,d;
	printf("Enter the number of days\n");
	scanf("%d",&ndays);
	y=ndays/365;
	ndays=ndays-(365*y);
	m=ndays/30;
	d=ndays-(m*30);
	printf("%d years %d months %d days",y,m,d);
	return 0;
}
