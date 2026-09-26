int led = 12;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(ed , LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
