#include <stdio.h>
void ANS(int a,int B)
{
	for(int i =a; i<=B; i++){
		if(i%5==0) printf("%d\n",i);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b) ANS(a,b);
	if(a>b) ANS(b,a);
}