int vdelay = 1000;

int ledarray[] = { 11, 8, 7, 6, 5, 4, 3 };

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for (int i = 0; i < 127; ++i) {
    Serial.println("--");
    Serial.println(i);
    for (int j = 0; j < 7; ++j) {
      //Serial.println(ledarray[j]);
      Serial.println(i << j);
      Serial.println(i & (i << j));
      if (i & (1 << j)) {
        digitalWrite(ledarray[j], HIGH);
      } else {
        digitalWrite(ledarray[j], LOW);      
      }
    }
    delay(vdelay);
  }
}
