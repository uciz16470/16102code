# 倒數計時
#### 視窗
```c
void setup(){
  size(1024, 400);
}
```

#### 計步器
```c
void draw(){
  if(mousePressed) background(204,204,77);
  else background(143,188,143);
  textSize(50);
  text( a, 100, 100);
}
int a=0;
void mousePressed(){
  a++;
}
```


#### 時鐘

![時鐘](https://github.com/uciz16470/2020cce/blob/gh-pages/0521/07460303w13-4.PNG)

```c
void setup(){
  size(1024, 400);          //程式大小
}
void draw(){
   background(240,230,140); //背景顏色
   fill(77,57,0);           //文字顏色
   textSize(50);            //字體大小
   int h=hour();
   int m=minute();
   int s=second();
   text("Now:" + h+":"+m+":"+s, 100, 100);
}
```

#### 倒數

```c

```
