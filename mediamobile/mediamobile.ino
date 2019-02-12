const int elements_number = 10;
int avg_store [elements_number];
int counter = 0;
int AnPin = A0;

void setup() {
  
  Serial.begin(9600);

}

void loop() {
 avg_store [counter % elements_number] = analogRead (AnPin);
 counter ++;

 long value = 0;
 for (int i = 0; i < elements_number; i++) {
  value += avg_store[i];
  
 }
 value = value / elements_number;
 Serial.print ("Interazione :");
 Serial.print (counter);
 Serial.print (", avg");
 Serial.print (value);
 delay(1000);

}

 

