int led1 = 2;
int led1 = 4;
int led1 = 8;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(2, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(4, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(4, LOW);
  delay(500); // Wait for 500 millisecond(s)

  digitalWrite(8, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
