#include <stdio.h>
int main()
{
	int a,ans=0;
	for(int i =0; i < 10; i++){
		scanf("%d",&a);
		if(a % 3 == 0) ans+=1;
	}
	printf("%d\n",ans);
}
