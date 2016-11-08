#include <Servo.h>

Servo myservo;   


int pos = 0;     

int speakerPin = 8;

void setup() {
  myservo.attach(13);   
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  for (pos = 0; pos <= 60; pos += 1) {
    myservo.write(pos);               
    delay(15);                       
  }
  for (pos = 60; pos >= 0; pos -= 1) {  
    myservo.write(pos);               
    delay(15);                        
  }
 
  meow();
  delay(2000);  
  meow2();
  mew();
  delay(2000);    
}

 
void meow() {   
  uint16_t i;
  playTone(5100,50);         
  playTone(394,180);         
  for(i=990; i<1022; i+=2)   
     playTone(i,8);
  playTone(5100,40);         
}
 
void meow2() {   
  uint16_t i;
  playTone(5100,55);        
  playTone(394,170);       
  delay(30);               
  for(i=330; i<360; i+=2)   
     playTone(i,10);
  playTone(5100,40);        
}
 
void mew() {
  uint16_t i;
  playTone(5100,55);        
  playTone(394,130);       
  playTone(384,35);         
  playTone(5100,40);       
}

void playTone(uint16_t tone1, uint16_t duration) {
  if(tone1 < 50 || tone1 > 15000) return;  
  for (long i = 0; i < duration * 1000L; i += tone1 * 2) {
     digitalWrite(speakerPin, HIGH);
     delayMicroseconds(tone1);
     digitalWrite(speakerPin, LOW);
     delayMicroseconds(tone1);
  }     
}
 
void beep (int16_t frequencyInHertz, long timeInMilliseconds) {
    long x;   
    long delayAmount = (long)(1000000/frequencyInHertz);
    long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
    for (x=0;x<loopTime;x++) {   
       digitalWrite(speakerPin,HIGH);
       delayMicroseconds(delayAmount);
       digitalWrite(speakerPin,LOW);
       delayMicroseconds(delayAmount);
    }  
}
 
void scale() {
  for(uint16_t i=50; i<15000; i++)  {
     playTone(i,20);
  }
}
