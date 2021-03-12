#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	
	if(N>7) printf("%d ",N/7);
	printf("%d\n",N%7);
}