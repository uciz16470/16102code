#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c ){
		if(a-b>=a-c) printf("%d",a-b);
		else printf("%d",a-c);
	}
	if(b>a && b>c ){
		if(b-a>=b-c) printf("%d",b-a);
		else printf("%d",b-c);
	}
	if(c>b && c>a ){
		if(c-b>=c-a) printf("%d",c-b);
		else printf("%d",c-a);
	}
	printf("\n");
}