# 程式設計作業
## 2021/2/26

 NO.1 找零錢
```c
int a,b,c,d;
scanf("%d",&a);
printf("%d=",a);

b = a / 50; a = a % 50; c = a / 5; d = a % 5;
printf("50*%d+5*%d+1*%d\n",b,c,d);
```

 NO.2 找因數
```c
int a,ans=0;
scanf("%d",&a);
for(int i=1; i<=a; i++){
	int b=1;
	b = a % i;
	if(b == 0) ans+=1;
	}
printf("%d\n",ans);
```

 NO.3 找倍數
```c
int a,ans=0;
for(int i =0; i < 10; i++){
	scanf("%d",&a);
	if(a % 3 == 0) ans+=1;
}
printf("%d\n",ans);
```

 NO.4 成績等級
```c
int a,ans=0;
for(int i =0; i < 10; i++){
	scanf("%d",&a);
	if(a % 3 == 0) ans+=1;
}
printf("%d\n",ans);
```

 NO.5 分式化簡 (考試)
```c
int m,s,q=1;
scanf("%d%d",&s,&m);

for(int i=1; i<=s; i++){
	if(s % i == 0){
		if(m % i == 0) q=i;
	}
}

printf("%d %d\n",s/q,m/q);
```

##2021/3/5
