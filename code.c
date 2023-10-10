//This code is appears like LINE FOLLOWING ROBOT, but we used it for following the SIDE WALLS. The walls can be created by the any waste cardboard. 

void setup() {           // final code verified done
  // put your setup code here, to run once:
pinMode(3,INPUT);
pinMode(5,INPUT);              // PIN 5 SENSOR IS rs SENSOR 
pinMode(12,OUTPUT);            // RIGHT motor
pinMode(13,OUTPUT);           
pinMode(10,OUTPUT);           // LEFT motor
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ls=digitalRead(3);     // ls=left sensor
  int rs=digitalRead(5);     // rs=right sensor

  if (ls==HIGH && rs==HIGH)  // HIGH means not detected.
  {
    digitalWrite(12,LOW);    // If the both sensors are not detect the SIDE WALLS the robot  will stop
    digitalWrite(13,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }

  if (ls==LOW && rs==HIGH)      /* If Right sensor doesn't detects the wall it will turn RIGHT direction provided 
 {                               that the left sensor should detect the LEFT side wall */
    digitalWrite(12,HIGH); // RIGHT MOTOR
    digitalWrite(13,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }

  if (ls==HIGH && rs==LOW)        /* If Left sensor doesn't detects the wall it will turn LEFT direction provided 
  {                                        that the Right sensor should detect the RIGHT side wall */
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(10,HIGH);  //LEFT MOTOR 
    digitalWrite(11,LOW);
  }

  if (ls==LOW && rs==LOW)  // both sensors detects SIDE WALLS the robot move fprward  
  {
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
}   