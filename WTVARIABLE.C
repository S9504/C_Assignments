#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("original value before swap=","%d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping=","%d %d",a,b);
	return 0;
}
