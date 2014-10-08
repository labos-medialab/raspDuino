void setup(){
	Serial.begin(115200);
}

void loop(){}

void serialEvent(){
	String data = Serial.readStringUntil('\n');
	Serial.println(data);
}

