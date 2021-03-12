#include <stdio.h>
int main()
{
	int S,ans;
	scanf("%d",&S);
	if(S<=2000) printf("100\n");
	else if(S>2000) {
		S=S-2000;
		ans = S/500*5+100;
		if(S%500 != 0) ans+=5;
		printf("%d\n",ans);
	}
}