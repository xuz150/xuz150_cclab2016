import processing.serial.*;

import cc.arduino.*;

Arduino arduino;

color off = color(255, 255, 255);
color on = color(255, 0, 0);

int state = Arduino.LOW;

void setup() {
  size(450, 500);
  
  println(Arduino.list());
  
  arduino = new Arduino(this, Arduino.list()[1], 57600);
  
  arduino.pinMode(13, Arduino.OUTPUT);
}

void draw() {
  background(255, 255, 255);
  stroke(on);

    if (state == Arduino.HIGH)
      fill(on);
    else
      fill(off);
      
    ellipse(350, 250, 25, 25);
    ellipse(300, 250, 25, 25);
    ellipse(250, 250, 25, 25);
    ellipse(200, 250, 25, 25);
    ellipse(150, 250, 25, 25);
    ellipse(100, 250, 25, 25);
    
    if (keyPressed){
    arduino.digitalWrite(13, Arduino.HIGH);
    state = Arduino. HIGH;
    }else{
    arduino.digitalWrite(13, Arduino.LOW);
    state = Arduino.LOW;
    }
}