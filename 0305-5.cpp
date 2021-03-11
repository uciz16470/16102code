#include <stdio.h>
char c[4];
int main()
{
	int n=1,ans=0;
	scanf("%s",&c);
	for(int i=3; i>-1; i--)
	{
		ans+=(c[i]-'0')*n;
		n*=2;
	}
	printf("%d\n",ans);
}
