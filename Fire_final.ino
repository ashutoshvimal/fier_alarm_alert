const int threshold=200;// sets threshold value for flame sensor
void setup() 
{
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(A2,INPUT);
pinMode(8,OUTPUT);
}
void loop() 
{
 
int flamesensvalue=analogRead(A2); // reads analog data from flame sensor
if (flamesensvalue<=threshold) { // compares reading from flame sensor with the threshold value
digitalWrite(13,HIGH);
digitalWrite(8,HIGH); //turns on led and buzzer
tone(8,1000);
delay(500); //stops program for 0.5 second
}
else
{
digitalWrite(8,LOW); //turns led off led and buzzer
noTone(8);
}
}
