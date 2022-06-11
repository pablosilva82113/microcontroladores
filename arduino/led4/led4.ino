int ledPin; // pin 13 asignado para el LED de salida

void setup() // Configura entradas y salidas
{
 for (ledPin=2;ledPin<=9;ledPin++){
  pinMode(ledPin, OUTPUT); // declara LED como salida
 }
}
void loop()
{
 for (ledPin=2;ledPin<=9;ledPin++) {
    digitalWrite(ledPin,HIGH); // enciende el LED
    delay(100);

  }

   for (ledPin=9;ledPin>=2;ledPin--) {
    digitalWrite(ledPin,HIGH); // enciende el LED
    delay(100);


  }

} 
