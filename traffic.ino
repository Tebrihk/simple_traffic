// Define the pins for each lane
const int lane1RedPin = 6;
const int lane1YellowPin = 5;
const int lane1GreenPin = 7;

const int lane2RedPin = 9;
const int lane2YellowPin = 10;
const int lane2GreenPin = 11;

const int lane3RedPin = 14;
const int lane3YellowPin = 15;
const int lane3GreenPin = 16;

const int lane4RedPin = 28;
const int lane4YellowPin = 24;
const int lane4GreenPin = 26;

// Timing constants
const unsigned long greenDuration = 10000; // Green light duration (10 seconds)
const unsigned long yellowDuration = 3000;  // Yellow light duration (3 seconds)

void setup() {
  // Set all traffic light pins as outputs
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
}

void loop() {
  // Lane 1
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
  delay(greenDuration - yellowDuration); // Wait until 7 seconds

  digitalWrite(lane1RedPin, LOW);    
  digitalWrite(lane1YellowPin, LOW);  
  digitalWrite(lane1GreenPin, HIGH);  
  digitalWrite(lane2RedPin, LOW);
  digitalWrite(lane2YellowPin, HIGH);  
  digitalWrite(lane2GreenPin, LOW);
  digitalWrite(lane3RedPin, HIGH);    
  digitalWrite(lane3YellowPin, LOW);  
  digitalWrite(lane3GreenPin, LOW);
  digitalWrite(lane4RedPin, HIGH);    
  digitalWrite(lane4YellowPin, LOW);  
  digitalWrite(lane4GreenPin, LOW);
   // Turn on lane 2 yellow light
  delay(yellowDuration);   
               // Wait for 3 seconds

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
  delay(greenDuration - yellowDuration); // Wait until 7 seconds

  digitalWrite(lane1RedPin, HIGH);    
  digitalWrite(lane1YellowPin, LOW);  
  digitalWrite(lane1GreenPin, LOW);  
  digitalWrite(lane2RedPin, LOW);
  digitalWrite(lane2YellowPin, LOW);  
  digitalWrite(lane2GreenPin, HIGH);
  digitalWrite(lane3RedPin, LOW);    
  digitalWrite(lane3YellowPin, HIGH);  
  digitalWrite(lane3GreenPin, LOW);
  digitalWrite(lane4RedPin, HIGH);    
  digitalWrite(lane4YellowPin, LOW);  
  digitalWrite(lane4GreenPin, LOW);
   // Turn on lane 2 yellow light
  delay(yellowDuration);   
               // Wait for 3 seconds

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
  delay(greenDuration - yellowDuration); // Wait until 7 seconds

  digitalWrite(lane1RedPin, HIGH);    
  digitalWrite(lane1YellowPin, LOW);  
  digitalWrite(lane1GreenPin, LOW);  
  digitalWrite(lane2RedPin, HIGH);
  digitalWrite(lane2YellowPin, LOW);  
  digitalWrite(lane2GreenPin, LOW);
  digitalWrite(lane3RedPin, LOW);    
  digitalWrite(lane3YellowPin, LOW);  
  digitalWrite(lane3GreenPin, HIGH);
  digitalWrite(lane4RedPin, LOW);    
  digitalWrite(lane4YellowPin, HIGH);  
  digitalWrite(lane4GreenPin, LOW);
   // Turn on lane 2 yellow light
  delay(yellowDuration);   
               // Wait for 3 seconds
  
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
  delay(greenDuration - yellowDuration); // Wait until 7 seconds

  digitalWrite(lane1RedPin, LOW);    
  digitalWrite(lane1YellowPin, HIGH);  
  digitalWrite(lane1GreenPin, LOW);  
  digitalWrite(lane2RedPin, HIGH);
  digitalWrite(lane2YellowPin, LOW);  
  digitalWrite(lane2GreenPin, LOW);
  digitalWrite(lane3RedPin, LOW);    
  digitalWrite(lane3YellowPin, HIGH);  
  digitalWrite(lane3GreenPin, LOW);
  digitalWrite(lane4RedPin, LOW);    
  digitalWrite(lane4YellowPin, LOW);  
  digitalWrite(lane4GreenPin, HIGH);
   // Turn on lane 2 yellow light
  delay(yellowDuration);   
               // Wait for 3 seconds
}
