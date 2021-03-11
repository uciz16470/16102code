#include <stdio.h>
int a[1000];
int main()
{
	int n;
	scanf("%d",&n);
	float sum=0,avg,SUM=0,AVG;

	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	printf("§¡¼Ð:%0.1f\n",sum/n);

	int x=0;
	for(int i=0; i<n; i++){
		if(a[i]>=avg){
			SUM+=a[i];
			x++;
		}
	}
		AVG=SUM/x;

	printf("«e¼Ð:%0.1f\n",AVG);
}
