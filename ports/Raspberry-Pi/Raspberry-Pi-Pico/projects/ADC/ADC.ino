// This Arduino code was automatically generated by Aixt Project
// Device = RP2040
// Board = Raspberry Pi Pico
// Backend = arduino

#define led     gp25
#define pin__output		OUTPUT
#define pin__input		INPUT
#define pin__in_pullup	INPUT_PULLUP
#define pin__high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)
#define pin__low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)
#define pin__read(PIN_NAME)   digitalRead(PIN_NAME)
#define pin__setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)
#define pin__write(PIN_NAME, VALUE)   digitalWrite(PIN_NAME, VALUE)
#define adc__read(PIN_NAME)   analogRead(PIN_NAME)

void main__init();

void pin__init();

void adc__init();

int32_t val = 0;

enum main____pin_names {
	gp0,
	gp1,
	gp2,
	gp3,
	gp4,
	gp5,
	gp6,
	gp7,
	gp8,
	gp9,
	gp10,
	gp11,
	gp12,
	gp13,
	gp14,
	gp15,
	gp16,
	gp17,
	gp18,
	gp19,
	gp20,
	gp21,
	gp22,
	gp23,
	gp24,
	gp25,
	gp26,
	gp27,
	gp28,
	gp29,
};

void main__init() {
	pin__init();
	adc__init();
	
}

void pin__init() {
}

void adc__init() {
}

void setup() {
	main__init();
	pin__setup(gp13, pin__output);
	pin__setup(gp14, pin__output);
	pin__setup(gp15, pin__output);
	pin__setup(gp16, pin__output);
}

void loop() {
	val = adc__read(gp27);
	if(val >= 0 && val < 255) {
		pin__high(gp13);
		pin__low(gp14);
		pin__low(gp15);
		pin__low(gp16);
	}
	if(val >= 255 && val < 511) {
		pin__low(gp13);
		pin__high(gp14);
		pin__low(gp15);
		pin__low(gp16);
	}
	if(val >= 511 && val < 767) {
		pin__low(gp13);
		pin__low(gp14);
		pin__high(gp15);
		pin__low(gp16);
	}
	if(val >= 767 && val < 1023) {
		pin__low(gp13);
		pin__low(gp14);
		pin__low(gp15);
		pin__high(gp16);
	}
}
