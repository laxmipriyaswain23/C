//Area of triangle
#include<stdio.h>
#include<math.h>
int main()
{
	float a=5,b=3.6,c=2.9;
	float s,area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	{
		printf("Area of triangle is %f",area);
	}
	return 0;
}
