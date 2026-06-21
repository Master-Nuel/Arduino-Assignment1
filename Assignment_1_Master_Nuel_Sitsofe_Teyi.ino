int ledPin = 13;
int startValue = 5;

//LED Flash
void flashLED (int times){
  int flash = 0;
  
  while (flash < times){
    digitalWrite (ledPin, HIGH);
    delay (500);
    digitalWrite (ledPin, LOW);
    delay (500);

    flash ++;
  }
}

void setup() {
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);

  Serial.println ("----Smart Countdown Starting---");
   int count = startValue;
   
   while (count > 0){
   Serial.print ("Counter is: ");
   Serial.println (count);

   //Blinking the LED
   flashLED (count);

   delay (1000);
   count--;
   }

   Serial.println ("---Countdown Complete---");
}

void loop() {
  // put your main code here, to run repeatedly:

}
