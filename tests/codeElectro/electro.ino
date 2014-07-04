const int electro = 2;

void setup()
{
	Serial.begin(9600);
	pinMode(electro, OUTPUT);
}
void loop(){
	//Serial.println("Demagnetise");
	digitalWrite(electro, HIGH);
	delay(1000);
	//Serial.println("Magnetise");
	//digitalWrite(electro, LOW);
	delay(1000);
}
