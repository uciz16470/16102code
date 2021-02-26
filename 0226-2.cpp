#include <stdio.h>
int main()
{
	int a,ans=0;
	scanf("%d",&a);
	
	for(int i=1; i<=a; i++){
		int b=1;
		b = a % i;
		if(b == 0) ans+=1;
	}
	printf("%d\n",ans);
}