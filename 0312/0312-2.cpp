#include <stdio.h>
char b[10];
int main()
{
	scanf("%s",&b);
	int i=0;
	while(b[i]!='\0'){
		if(b[i] >= 'A' && b[i] <='Z'){
			b[i]=b[i]-'A'+'a';
			printf("%c",b[i]);
		}
		else if(b[i] >= 'a' && b[i]<='z'){
			b[i]=b[i]-'a'+'A';
			printf("%c",b[i]);
		}
		else printf("%c",b[i]);
	i++;
	}
	printf("\n");
}