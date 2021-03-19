#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	printf("%d=",a);
	
	b = a / 50;
	a = a % 50;
	c = a / 5;
	d = a % 5;
	printf("50*%d+5*%d+1*%d\n",b,c,d);
}
