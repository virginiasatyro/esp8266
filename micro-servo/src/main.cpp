#include <Arduino.h>
#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(2);  // GPIO2 = D4
}

void loop() {
  myservo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);
}


/*#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}*/