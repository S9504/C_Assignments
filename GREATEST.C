#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:\n:"); 
    scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	if(a>b&&a>c);
	printf("biggest number is %d",a);
	if(b>a&&c>b);
	printf("Biggest number is %d",b);
	if(c>a&&c>b);
	printf("biggest number is %d",c);
	return 0;
}
