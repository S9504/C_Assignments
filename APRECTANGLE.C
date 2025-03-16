#include<stdio.h>
int main()
{
	float l,w,area,perimeter;
	printf("enter the lentgh");
	scanf("%f",&l);
	printf("enter the width");
	scanf("%f",&w);
	area=l*w;
	perimeter=2*(l+w);
	printf("area of the rectangle:%.2f",area);
	printf("perimeter of the rectangle:%.2f",perimeter);
	return 0;
}
