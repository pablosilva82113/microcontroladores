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

byte  numero [16][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},
                      {0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},
                      {1,1,1,1,1,1,1},{1,1,1,0,0,1,1},{1,1,1,0,1,1,1},{0,0,1,1,1,1,1},
                      {1,0,0,1,1,1,0},{1,1,1,1,0,0,1},{1,0,0,1,1,1,1},{1,0,0,0,1,1,1}};


  byte a,aux,pot=1,sum=0;
 for (a=22;a<=25;a++) {
   aux=digitalRead(a);
   sum = sum + (pot*aux);
   pot=pot*2;
 }
 
    for (ledPin=2;ledPin<=9;ledPin++){
      digitalWrite(ledPin, numero[sum][ledPin-2]);
    }
 

}
