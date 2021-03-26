# 字串排序

### 1
```c
    char line[10]= "decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s \n", line);
    printf("%s \n", line2);
```

### 2

```c
    char line[10]= "decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s \n", line);
    printf("%s \n", line2);

    char line3[]={'m','a','j','o','r','i','t','y'};
    printf("??%s??\n",line3);
```

### 3

```c
       char line[5][10]={"decline","proper","majority","bullet","shop"};
    char *p;

    for(int i=0; i<5; i++){
        p = line[i];
        printf("%s\n", line[i]);
    }
```

### 4

```c
printf("%d\n", '\0');
```

### 5

```c
 char line[10] ="majority";
    char line2[10]="ask";

    if( strcmp( line, line2) > 0) {
        printf("line大\n");
    }else{
        printf("line2大\n");
    }
 ```
    
 ### Fin
 
 ```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(strcmp(line[i],line[j])>0){
				strcpy(temp,line[i]);
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s\n",line[i]);
	}
}

 ```
