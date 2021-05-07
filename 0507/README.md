```c
int b1 = *(int*) p1;
```

```c
struct date{
    int ans;
    char c;
};
struct date box;
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char lin[2000];
int ans[256];


int main()
{
	for(int t=0; gets( lin ); t++){
		for(int i=0; i<256; i++) ans[i] = 0;
		
	//	qsort(lin,256,sizeof(char),compare);
		
		for(int i=0; lin[i] != 0; i++){
			char c=lin[i];
			ans[c] ++;
		}
		
		if( t>0) printf("\n");
		for(int i=0; i<256; i++){
			if(ans[i]>0) printf("%d %d\n",i ,ans[i]);
		}
	}
}
```
