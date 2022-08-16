int pir1 = LOW;
int pir2 = LOW;
int pir3 = LOW;
int pir4 = LOW;
int val_1 = 0;
int val_2 = 0;
int val_3 = 0;
int val_4 = 0;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop() {
  val_1 = digitalRead(2);
  val_2 = digitalRead(3);
  val_3 = digitalRead(4);
  val_4 = digitalRead(5);

  // 센서 1
  if (val_1 == HIGH) {
    if(pir1 == LOW) {
      Serial.println("1");
      pir1 = HIGH;
    }
  }
  else if (pir1 == HIGH) {
    pir1 = LOW;
  }

  // 센서 2
  if (val_2 == HIGH) {
    if(pir2 == LOW) {
      Serial.println("2");
      pir2 = HIGH;
    }
  }
  else if (pir2 == HIGH) {
    pir2 = LOW;
  }

  // 센서 3
  if (val_3 == HIGH) {
    if(pir3 == LOW) {
      Serial.println("3");
      pir3 = HIGH;
    }
  }
  else if (pir3 == HIGH) {
    pir3 = LOW;
  }

  //센서 4
  if (val_4 == HIGH) {
    if(pir4 == LOW) {
      Serial.println("4");
      pir4 = HIGH;
    }
  }
  else if (pir4 == HIGH) {
      pir4 = LOW;
  }
}
