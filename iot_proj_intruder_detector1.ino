int pirstate =0;
int pir = 2;
int buzzer = 3;
int led = 4;

void setup()
{
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  pirstate=digitalRead(pir);
  if (pirstate==HIGH)
  {
    Serial.println("Intruder detected!");
    digitalWrite(buzzer, HIGH);
    tone(buzzer, 300, 1000); // Send 100 Hz sound signal
    digitalWrite(led, HIGH);
    delay(1000);
    
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(1000);
    
  }
  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
}
    
