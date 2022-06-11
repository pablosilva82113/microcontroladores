int ledPin ; // LED en el pin digital 13
void setup() // configura el pin de salida
{
  for (ledPin=2;ledPin<=9;ledPin++)
   pinMode(ledPin, OUTPUT); // configura el pin 13 comosalida

}
void loop() // inicia el bucle del programa
{
  for (ledPin=2;ledPin<=9;ledPin++)
    digitalWrite(ledPin, HIGH); // activa el LED
    delay(1000); // espera 1 segundo
  for (ledPin=2;ledPin<=9;ledPin++)
      digitalWrite(ledPin, LOW); // desactiva el LED
      delay(1000); // espera 1 segundo
}

