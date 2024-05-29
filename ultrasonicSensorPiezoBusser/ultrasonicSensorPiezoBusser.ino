int trig = 2; int echo = 3;
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
 digitalWrite(trig,1); //초음파를 쏜다!
 delay(10);
 digitalWrite(trig,0); //초음파를 쏘지 않음!
  
  //현재 echo핀의 상태는 0(low)상태
  //echo핀이 1(HIGH)상태가 될때까지 걸리는 시간을 측정하는 함수!
  //-> pulseIn()
  int duration = pulseIn(echo,1);
  duration = duration/2; //왕복시간이기떄문에 2로 나눠줌
  int distance = duration / 29.1; //29.1 : HC-SR04 보정 값
  Serial.println(distance);
  if( distance >5 &&distance < 50){
    tone(9,330);
    delay(500);
    noTone(9);
    delay(500);
  }
  else if (distance <=5){
    tone(9,330);
    delay(50);
    noTone(9);
   delay(50);
  }
  else{
    noTone(9);
  }
}