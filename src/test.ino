String data="";
int state=0;
void setup() {
	pinMode(13, OUTPUT);
	Serial.begin(115200);
}

void loop() {
	if(Serial.available()){
		data = Serial.readStringUntil('\n');
		state = data.toInt();
		digitalWrite(13, state);
	}
}
