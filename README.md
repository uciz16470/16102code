# 程式設計作業
## 2021/2/26

 NO.1 找零錢
```c
int a,b,c,d;
	scanf("%d",&a);
	printf("%d=",a);
	
	b = a / 50;
	a = a % 50;
	c = a / 5;
	d = a % 5;
	printf("50*%d+5*%d+1*%d\n",b,c,d);
int a,ans=0;
	scanf("%d",&a);
```

 NO.2 找因數
```c
	for(int i=1; i<=a; i++){
		int b=1;
		b = a % i;
		if(b == 0) ans+=1;
	}
	printf("%d\n",ans);
```

 NO.3
```c

```

 NO.4
```c

```
