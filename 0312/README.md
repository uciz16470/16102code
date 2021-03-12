
### 上課
1 
```c
int a[5] = {0, 10, 20, 30 ,40};
    int *p = &a[2];
    *p = 222;

    p = p+2;
    *p = 666;
```

2
列印 
```c
void printAll(){
    for(int i=0; i<5; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
```
主程式
```c
        printAll();
    int *p = &a[2];
    *p = 222;
        printAll();
        
    p = p+2;
    *p = 666;
        printAll();

    p--;
    *p = 555;
        printAll();
```
