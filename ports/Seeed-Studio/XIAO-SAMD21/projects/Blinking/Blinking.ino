// This Arduino code was automatically generated by Aixt Project
// Device = SAMD21
// Board = Seeed Studio XIAO SAMD21
// Backend = arduino

#define time__sleep(TIME) delay(TIME*1000)
#define time__sleep_ms(TIME)  delay(TIME)
#define time__sleep_us(TIME)	delayMicroseconds(TIME)
#define pin__out OUTPUT
#define pin__in INPUT
#define pin__high(PIN_NAME)		digitalWrite(PIN_NAME, HIGH)
#define pin__low(PIN_NAME)		digitalWrite(PIN_NAME, LOW)
#define pin__read(PIN_NAME)		digitalRead(PIN_NAME)
#define pin__setup(PIN_NAME, MODE)		pinMode(PIN_NAME, MODE)
#define pin__write(PIN_NAME, VALUE)		digitalWrite(PIN_NAME, VALUE)

void main__init();

void time__init();

void pin__init();

void main__init() {
	time__init();
	pin__init();
	
}

void time__init() {
}

void pin__init() {
}

void setup() {
	main__init();
	pin__setup(2, pin__out);
	pin__setup(3, pin__out);
	for(int i=0; i<10; i++) {
		pin__high(2);
		time__sleep_ms(250);
		pin__low(2);
		time__sleep_ms(250);
	}
}

void loop() {
	pin__high(3);
	time__sleep(1);
	pin__low(3);
	time__sleep(2);
}
