int ledPin; // pin 13 asignado para el LED de salida

void setup() // Configura entradas y salidas
{
 for (ledPin=2;ledPin<=9;ledPin++){
  pinMode(ledPin, OUTPUT); // declara LED como salida
  pinMode(20+ledPin, INPUT); // declara pulsador como entrada
 }
}
void loop()
{
 for (ledPin=2;ledPin<=9;ledPin++)  
       digitalWrite(ledPin, digitalRead(20+ledPin)); // enciende el LED


} 
