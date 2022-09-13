int pinLED = 13;


void setup() {
  // put your setup code here, to run once:
   pinMode(pinLED, OUTPUT); //Menyiapkan LED siap Bekerja
   Serial.begin(9600);
   Serial.println("Alat Menyala Dan Siap Digunakan");
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(pinLED, HIGH); // Menyalakan LED Board Arduino
  Serial.println("Lampu Nyala");
  delay(100); 
  digitalWrite(pinLED, LOW); //Mematikan LED Board Arduino
  Serial.println("Lampu Mati");
  delay(100);
  digitalWrite(pinLED, HIGH); 
  Serial.println("Lampu Nyala");
  delay(100);
  digitalWrite(pinLED, LOW); 
  Serial.println("Lampu Mati");
  delay(500);

  digitalWrite(pinLED, HIGH); // Menyalakan LED Board Arduino
  Serial.println("Lampu Nyala");
  delay(100); 
  digitalWrite(pinLED, LOW); //Mematikan LED Board Arduino
  Serial.println("Lampu Mati");
  delay(100);
  digitalWrite(pinLED, HIGH); 
  Serial.println("Lampu Nyala");
  delay(100);
  digitalWrite(pinLED, LOW); 
  Serial.println("Lampu Mati");
  delay(500);
  

}
