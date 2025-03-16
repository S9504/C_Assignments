#include<stdio.h>
int main()
{
	float p,r,t;
	scanf("% f %f %f",&p,&r,&t);
	float si;
	si=(p*r*t)/100;
	printf("the simple interest is %f",si);
	return 0;
}
