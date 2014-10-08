bool state = 0;

void setup(){
	Serial.begin(115200);
	pinMode(13, OUTPUT);
}

void loop(){}

void serialEvent(){
	if(Serial.available())
		String data = Serial.readStringUntil('\n');
	if(data == "led") led = !led;
	digitalWrite(13, led);
	Serial.println(led);
}
