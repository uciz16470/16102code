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


