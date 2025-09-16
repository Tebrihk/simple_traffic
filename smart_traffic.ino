//for the first lane
const int lane1RedPin = 6;
const int lane1YellowPin = 5;
const int lane1GreenPin = 7;

//for the second lane
const int lane2RedPin = 9;
const int lane2YellowPin = 10;
const int lane2GreenPin = 11;

//for the third lane
const int lane3RedPin = 14;
const int lane3YellowPin = 15;
const int lane3GreenPin = 16;

//for the fouth lane
const int lane4RedPin = 28;
const int lane4YellowPin = 24;
const int lane4GreenPin = 26;

//for all the infered sensors
const int irSensor1_Lane1 = 48;
const int irSensor2_Lane1 = 50;
const int irSensor1_Lane2 = 52;
const int irSensor1_Lane3 = 21;
const int irSensor2_Lane3 = 20;
const int irSensor1_Lane4 = 46;
const int irSensor2_Lane4 = 44;

// Timing constants
const unsigned long greenDuration = 10000; 
const unsigned long yellowDuration = 3000; 
const unsigned long extraTime = 2000;      

void setup() {
  //setting up all the hardware
  pinMode(lane1RedPin, OUTPUT);
  pinMode(lane1YellowPin, OUTPUT);
  pinMode(lane1GreenPin, OUTPUT);
  pinMode(lane2RedPin, OUTPUT);
  pinMode(lane2YellowPin, OUTPUT);
  pinMode(lane2GreenPin, OUTPUT);
  pinMode(lane3RedPin, OUTPUT);
  pinMode(lane3YellowPin, OUTPUT);
  pinMode(lane3GreenPin, OUTPUT);
  pinMode(lane4RedPin, OUTPUT);
  pinMode(lane4YellowPin, OUTPUT);
  pinMode(lane4GreenPin, OUTPUT);

  pinMode(irSensor1_Lane1, INPUT);
  pinMode(irSensor2_Lane1, INPUT);
  pinMode(irSensor1_Lane2, INPUT);
  pinMode(irSensor1_Lane3, INPUT);
  pinMode(irSensor2_Lane3, INPUT);
  pinMode(irSensor1_Lane4, INPUT);
  pinMode(irSensor2_Lane4, INPUT);
}

void lane1()
{
digitalWrite(lane1RedPin, LOW);    
  digitalWrite(lane1YellowPin, LOW);  
  digitalWrite(lane1GreenPin, HIGH);  
  digitalWrite(lane2RedPin, HIGH);    
  digitalWrite(lane2YellowPin, LOW);  
  digitalWrite(lane2GreenPin, LOW);
  digitalWrite(lane3RedPin, HIGH);    
  digitalWrite(lane3YellowPin, LOW);  
  digitalWrite(lane3GreenPin, LOW);
  digitalWrite(lane4RedPin, HIGH);    
  digitalWrite(lane4YellowPin, LOW);  
  digitalWrite(lane4GreenPin, LOW);
  delay(greenDuration - yellowDuration);  
  digitalWrite(lane1GreenPin, HIGH); }

void lane2r(){
  digitalWrite(lane2RedPin, LOW);
  digitalWrite(lane2YellowPin, HIGH);
  delay(yellowDuration);   
}
void lane2()
{
  digitalWrite(lane1RedPin, HIGH);    
  digitalWrite(lane1YellowPin, LOW);  
  digitalWrite(lane1GreenPin, LOW);  
  digitalWrite(lane2RedPin, LOW);    
  digitalWrite(lane2YellowPin, LOW);  
  digitalWrite(lane2GreenPin, HIGH);
  digitalWrite(lane3RedPin, HIGH);    
  digitalWrite(lane3YellowPin, LOW);  
  digitalWrite(lane3GreenPin, LOW);
  digitalWrite(lane4RedPin, HIGH);    
  digitalWrite(lane4YellowPin, LOW);  
  digitalWrite(lane4GreenPin, LOW);
  delay(greenDuration - yellowDuration);  
  digitalWrite(lane2GreenPin, HIGH); 
}

void lane3r(){
  digitalWrite(lane3RedPin, LOW);
  digitalWrite(lane3YellowPin, HIGH);  
  delay(yellowDuration);
}
void lane3()
{
    digitalWrite(lane1RedPin, HIGH);    
    digitalWrite(lane1YellowPin, LOW);  
    digitalWrite(lane1GreenPin, LOW);  
    digitalWrite(lane2RedPin, HIGH);    
    digitalWrite(lane2YellowPin, LOW);  
    digitalWrite(lane2GreenPin, LOW);
    digitalWrite(lane3RedPin, LOW);    
    digitalWrite(lane3YellowPin, LOW);  
    digitalWrite(lane3GreenPin, HIGH);
    digitalWrite(lane4RedPin, HIGH);    
    digitalWrite(lane4YellowPin, LOW);  
    digitalWrite(lane4GreenPin, LOW);
    delay(greenDuration - yellowDuration);
     digitalWrite(lane3GreenPin, HIGH); 
}

void lane4r(){
  digitalWrite(lane4RedPin, LOW);    
  digitalWrite(lane4YellowPin, HIGH);
  delay(yellowDuration);
}
void lane4()
{
  digitalWrite(lane1RedPin, HIGH);    
  digitalWrite(lane1YellowPin, LOW);  
  digitalWrite(lane1GreenPin, LOW);  
  digitalWrite(lane2RedPin, HIGH);    
  digitalWrite(lane2YellowPin, LOW);  
  digitalWrite(lane2GreenPin, LOW);
  digitalWrite(lane3RedPin, HIGH);    
  digitalWrite(lane3YellowPin, LOW);  
  digitalWrite(lane3GreenPin, LOW);
  digitalWrite(lane4RedPin, LOW);    
  digitalWrite(lane4YellowPin, LOW);  
  digitalWrite(lane4GreenPin, HIGH);
  delay(greenDuration - yellowDuration);  
  digitalWrite(lane4GreenPin, HIGH);
}

void lane1r(){
  digitalWrite(lane1RedPin, LOW);    
  digitalWrite(lane1YellowPin, HIGH);
  delay(yellowDuration);
}

void loop() {
  
  if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane1();
    lane2();
    lane3();
    lane4();
  }else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane2();
    delay(extraTime);
    lane2r();
    lane3();
    delay(extraTime);
    lane3r();
    lane4();
    delay(extraTime);
    lane2r();
  }else if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane1();
    delay(extraTime);
    lane3r();
    lane3();
    delay(extraTime);
    lane4r();
    lane4();
    delay(extraTime);
    lane1r();
  } else if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane1();
    delay(extraTime);
    lane2r();
    lane2();
    delay(extraTime);
    lane4r();
    lane4();
    delay(extraTime);
    lane1r();
  }else if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == HIGH )
  {
    lane1();
    delay(extraTime);
    lane2r();
    lane2();
    delay(extraTime);
    lane3r();
    lane3();
    delay(extraTime);
    lane1r();
  }else if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == HIGH )
  {
   lane1();
  }else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == HIGH )
  {
   lane2();
  } else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == HIGH )
  {
    lane3();
  }else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane4();
  }else if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == HIGH )
  {
    lane1();
    delay(extraTime);
    lane2r();
    lane2();
    delay(extraTime);
    lane1r();
  }else if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == HIGH )
  {
    lane1();
    delay(extraTime);
    lane3r();
    lane3();
    delay(extraTime);
    lane1r();
  }else if(digitalRead(irSensor1_Lane1) == LOW && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane1();
    delay(extraTime);
    lane4r();
    lane4();
    delay(extraTime);
    lane1r();
  }else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == HIGH )
  {
    lane2();
    delay(extraTime);
    lane3r();
    lane3();
    delay(extraTime);
    lane2r();
  }else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == LOW && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane2();
    delay(extraTime);
    lane4r();
    lane4();
    delay(extraTime);
    lane2r();
  }else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == LOW && digitalRead(irSensor1_Lane4) == LOW )
  {
    lane3();
    delay(extraTime);
    lane4r();
    lane4();
    delay(extraTime);
    lane3r();
  }else if(digitalRead(irSensor1_Lane1) == HIGH && digitalRead(irSensor1_Lane2) == HIGH && digitalRead(irSensor1_Lane3) == HIGH && digitalRead(irSensor1_Lane4) == HIGH )
  {
    digitalWrite(lane1RedPin, HIGH);    
    digitalWrite(lane1YellowPin, LOW);  
    digitalWrite(lane1GreenPin, LOW);  
    digitalWrite(lane2RedPin, HIGH);    
    digitalWrite(lane2YellowPin, LOW);  
    digitalWrite(lane2GreenPin, LOW);
    digitalWrite(lane3RedPin, HIGH);    
    digitalWrite(lane3YellowPin, LOW);  
    digitalWrite(lane3GreenPin, LOW);
    digitalWrite(lane4RedPin, HIGH);    
    digitalWrite(lane4YellowPin, LOW);  
    digitalWrite(lane4GreenPin, LOW);
  }
}
