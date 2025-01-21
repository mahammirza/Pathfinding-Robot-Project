//define sensor connections
int echoPin = 2, trigPin = 3, motorPin1 = 8, motorPin2 = 9

// Define extra variables to store sensor information and to calculate distance
;long duration; //variable for the duration of sound wave travel
int distance; //variable for the distance measurement


void setup() {
  // put your setup code here, to run once:

pinMode(trigPin, OUTPUT); // Trig pin sends the pulse so we set it as output
pinMode(echoPin, INPUT); //echo pin reads the returning pulse, so we set that as input
pinMode (motorPin1, OUTPUT);
pinMode (motorPin2, OUTPUT);

Serial.begin(9600); // Serial Communication is starting with 9600 of baudrate speed


}

void loop() {
  // put your main code here, to run repeatedly:

// Clears trigPin condition as a precaution
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

//Sets the trigPin HIGH (ACTIVE) for 10 microseconds, then turn it off
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

//Reads the echoPin, returns the sound wave travel time in microseconds into variable duration
duration = pulseIn(echoPin, HIGH);

//Calculate distance by multiplying distance by the speed of sound (0.034) and divide by 2 (for the pulse to go and come back)
distance = duration * 0.034 / 2; 



//Main Motor Code, speeds up when object is far away, slows down when closer

if (distance < 15) { // Distance from sensor
digitalWrite (motorPin1, LOW); // When in range, motor should start low
digitalWrite (motorPin2, LOW);
Serial.print ("cm MOTOR STOP");
delay (1000);

do {
digitalWrite (motorPin1, HIGH); //turn direction
digitalWrite (motorPin2, LOW);
}

while (distance < 15); { // If the distance is still less than 15
digitalWrite (motorPin1, LOW); // When in range, motor should start high
digitalWrite (motorPin2, LOW);
Serial.print ("cm MOTOR STOP");
delay (1000);

do {
digitalWrite (motorPin1, LOW); //turn 180
digitalWrite (motorPin2, HIGH);

// how to turn 180 degrees and 90?

delay (1000);
}

while (distance > 15); {
digitalWrite(motorPin1, HIGH);
digitalWrite(motorPin2 , LOW);
Serial.println("cm   MOTOR START");
 delay(1000);
}
}}


if (distance > 20) { // Distance from sensor
digitalWrite (motorPin1, LOW); // When in range, motor should start low
digitalWrite (motorPin2, LOW);
}
}

// output the distance to the Serial Monitor
Serial.print (" Distance = ");
Serial.print (distance);
Serial.print (" cm");

delay (200);


}
