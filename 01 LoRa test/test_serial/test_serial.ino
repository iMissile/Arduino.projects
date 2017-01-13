static uint8_t mydata[] = "Hello, world!";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // set baud rate
while (!Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
 // Serial.println("Hello, World!"); // print output
 Serial.println("\nBYTE");
 Serial.println("B");
 // так не работает
 // Serial.write(mydata); // https://www.arduino.cc/en/Serial/write
 Serial.write("Simple Hello\n");
 // Serial.println(strlen(mydata)); // печатаем длину строки
 Serial.write(mydata, strlen(mydata));
 delay(500);
}

