 int analog_read_pin=A5;
 

void setup() {

pinMode(analog_read_pin,INPUT);
//Set up your serial monitor
 Serial.begin(9600);


}

void loop() {
 int read_voltage=analogRead(analog_read_pin);
 //Analog read conversion
 float actual_voltage=read_voltage*(5.0/1023.0);
 Serial.println(actual_voltage);
 delay(300);


}
