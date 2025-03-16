#include<stdio.h>
#include<math.h>
int main()
{
	float number,floorvalue,ceillingvalue;
	printf("enter the number");
	scanf("%f",&number);
	floorvalue = floor(number);
	ceillingvalue = ceil(number);
	printf("the floor value is:%2f",floorvalue);
	printf("the ceilling value is:%2f",ceillingvalue);
}
