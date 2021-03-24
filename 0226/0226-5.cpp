#include <stdio.h>
int main()
{
	int m,s,q=1;
	scanf("%d%d",&s,&m);
	
	for(int i=1; i<=s; i++){
		if(s % i == 0){
			if(m % i == 0) q=i;
		}
	}
	printf("%d %d\n",s/q,m/q);
}
