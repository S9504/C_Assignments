#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci,a;
	int n;
	printf("enter the principle:");
	scanf("%f",&p);
	printf("enter the rate:");
	scanf("%f",&r);
	printf("%f",&t);
	printf("enter the no of times interest is applied:");
	scanf("%d",&n);
	r=r/100;
	a=p*pow((1+r/n),n*t);
	ci=a-p;
	printf("the compound interest:%.2f",ci);
	printf("the amount:%.2f",a);
	return 0;
}
