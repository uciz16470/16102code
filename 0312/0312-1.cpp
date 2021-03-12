#include <stdio.h>

int main()
{
	int n,b;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&b);
		printf("%d,",b*b);
	}
	printf("\n");
}