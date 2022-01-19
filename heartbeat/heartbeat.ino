void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  int t = millis() / 1000;
  Serial.println(millis());
  Serial.print(t);
  Serial.println(" sec have elapsed.");
  delay(1000);
}
