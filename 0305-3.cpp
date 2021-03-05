#include <stdio.h>
int ANS(int a,int q)
{
	if(a >= 2){
		q += a*(a-1);
		a--;
		ANS(a,q);
	}
	else  return q;
}

int main()
{
	int a,q=0;
	scanf("%d",&a);
	printf("%d\n",ANS(a,q));
}
