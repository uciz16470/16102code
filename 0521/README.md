# 倒數計時
#### 時鐘

```c
void setup(){
  size(1024, 400);
}
void draw(){
   background(240,230,140);
   fill(77,57,0);
   textSize(50);
   int h=hour();
   int m=minute();
   int s=second();
   text("Now:" + h+":"+m+":"+s, 100, 100);
}
```
