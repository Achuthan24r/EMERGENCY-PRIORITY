
#define IR1 2
#define IR2 3
#define IR3 4
#define IR4 5

#define EMERGENCY 6

#define RED 8
#define YELLOW 9
#define GREEN 10

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);

  pinMode(EMERGENCY, INPUT_PULLUP);

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  if (digitalRead(EMERGENCY) == LOW) {
    emergencyMode();
    return;
  }

  controlLane(IR1);
  controlLane(IR2);
  controlLane(IR3);
  controlLane(IR4);
}

void controlLane(int irPin) {

  int density = digitalRead(irPin);
  int greenTime;

  if (density == HIGH) {
    greenTime = 8000;  // Heavy traffic
  } else {
    greenTime = 4000;  // Light traffic
  }

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delay(greenTime);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);

  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(1000);
}

void emergencyMode() {
  Serial.println("EMERGENCY VEHICLE DETECTED!");

  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);   // Immediate green

  delay(10000); // Emergency passes

  digitalWrite(GREEN, LOW);
  digitalWrite(RED, HIGH);
}
