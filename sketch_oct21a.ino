int motorR1 = 9;
int motorR2 = 10;

int motorL1 = 12;
int motorL2 = 13;


void setup(){
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT); 
  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  delay(5000);
}

void loop(){
  
  // Motor rotates clockwise
  forward();
  delay(3000);  // Motor rotates for 2 seconds
  stop();
  delay(5000);
  back();
  delay(3000);  // Motor rotates for 2 seconds
  stop();
  delay(5000);
}

void forward(){
  
  digitalWrite(motorR1, LOW);    
  digitalWrite(motorR2, HIGH);
  digitalWrite(motorL1, LOW);    
  digitalWrite(motorL2, HIGH);
}

void back(){
  digitalWrite(motorR1, HIGH);   
  digitalWrite(motorR2, LOW);
  digitalWrite(motorL1, HIGH);   
  digitalWrite(motorL2, LOW);
}
void stop(){
  digitalWrite(motorR1, LOW);    
  digitalWrite(motorR2, LOW);
  digitalWrite(motorL1, LOW);    
  digitalWrite(motorL2, LOW);

}
