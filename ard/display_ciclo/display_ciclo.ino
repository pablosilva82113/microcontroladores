int ledPin; // pin 13 asignado para el LED de salida
void setup() // Configura entradas y salidas
{
 for (ledPin=2;ledPin<=9;ledPin++){
  pinMode(ledPin, OUTPUT); // declara LED como salida
 }
}
void loop()
{

byte numero [10][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},
{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},
{1,1,1,0,0,0,0},{1,1,1,1,1,1,1}};


  byte a;
 for (a=2;a<=9;a++) {
     for (ledPin=2;ledPin<=9;ledPin++){
    digitalWrite(ledPin,numero[a][ledPin-2]); // enciende el LED
  } 
   delay(200);   // espera 200 ms
 }

}
