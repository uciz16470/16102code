# 抽獎

```java
void setup(){
  size(300,200);
  float ans = random(60);
  textSize(30);
  text( ans, 0, 30);
}
```

```java
int []a = {1,2,3,4,5,6,7,8,9,10};
void setup(){
  size(700,200);
  textSize(30);
}
void draw(){
  background(#35D3A0);
  for(int i=0;i<10;i++){
    text( a[i], i*60,100);
  }
}
void mousePressed(){
  int i1 = (int) random(10);
  int i2 = (int) random(10);
  int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
}
```
