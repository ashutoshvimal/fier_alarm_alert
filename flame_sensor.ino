const int ledpin=13; // ledpin,flamepin and buzpin are not changed throughout the process
const int flamepin=A2;
const int buzpin=8;
const int threshold=200;// sets threshold value for flame sensor
int flamesensvalue=0; // initialize flamesensor reading
void setup() 
{
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(flamepin,INPUT);
pinMode(buzpin,OUTPUT);
}
void loop() 
{
flamesensvalue=analogRead(flamepin); // reads analog data from flame sensor
if (flamesensvalue<=threshold) { // compares reading from flame sensor with the threshold value
digitalWrite(ledpin,HIGH); //turns on led and buzzer
delay (1000);
digitalWrite(ledpin,LOW);
delay (1000);
tone(buzpin,10);
delay(500); //stops program for 0.5 second
}
else
{
digitalWrite(ledpin,LOW); //turns led off led and buzzer
noTone(buzpin);
}

}
