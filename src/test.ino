#define LED 13
bool led = 0;
void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  led = !led;
  digitalWrite(LED, led);
  delay(1000);
}

