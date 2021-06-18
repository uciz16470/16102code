# 打字機

```java
void setup(){
  size(400,200);
  textSize(40);
}
String line="world";
void draw(){
  background(#96C9B0);
  fill(0);
  text("hello",100,100);
  text(line,100,150);
}
```

### 刪掉錯字
```java
void keyPressed(){
  int len = line.length(); 
  if( key>='a' && key<='z') line = line +key;
  if( key>='A' && key<='Z') line = line +key;
  if( key == BACKSPACE && len>0) line = line.substring(0,len-1);
}
```

### 算分
```java
void keyPressed(){
  int len = line.length(); 
  if( key>='a' && key<='z') line = line +key;
  if( key>='A' && key<='Z') line = line +key;
  if( key == BACKSPACE && len>0) line = line.substring(0,len-1);
  if( key == ENTER ){
    if( line.equals(Q)==true){
      score ++;
    }else score --;
  }
}
```


