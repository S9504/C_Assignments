#include<stdio.h>
int main()
{
	float c1,c2,f1,f2;
	scanf("%d",&c1);
	f1=(c1*9/5)+32;
	printf("%d",f1);
	scanf("%f",&f2);
	c2=(f2-32)*5/9;
	printf("%f",c2);
	return 0;
	
}
