#include<stdio.h>
int main ()
{
int i,j,rows=4,number=1;
for(i=1;i<=rows;i++)
{
	for(j=1;j<=rows-i;j++)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		printf("%d",number);
		number++;
	}
	printf("\n");
}
return 0;
}
