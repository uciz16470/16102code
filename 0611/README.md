# 轉盤

### 圓形
```java
  ellipse(50,50,80,80);
```
(圓心位置,圓心位置,長,寬)


### 扇形(互動式)
```java
void draw(){
  background(57,50,50);
  fill(255);
  ellipse(100,100,180,180);
  fill(25,150,150);
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}
```

```java
int degree=0;
void draw(){
  background(57,50,50);
  float stop=radians(degree);;
  text(degree,200,100);
  text(stop,200,150);
  arc(100,100,180,180,0,stop);
  if(mousePressed) degree++;
}
```

```java
void draw(){
  background(57,50,50);
  arc(100,100,180,180,radians(90),radians(180));
}
```
(圓心位置,圓心位置,長,寬,開始角度,結束角度)

### 自轉扇形
```java
void setup(){
  size(400,200);
  textSize(40);
}
float shift=0;
void draw(){
  background(57,50,50);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100,100,180,180,start,stop);
  shift +=1;
}
```
