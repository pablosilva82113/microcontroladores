int ledPin; // pin 13 asignado para el LED de salida
void setup() // Configura entradas y salidas
{
 for (ledPin=2;ledPin<=9;ledPin++){
  pinMode(ledPin, OUTPUT); // declara LED como salida
 }
}
void loop()
{

digitalWrite(2, HIGH); //0
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);// activa el LED
      delay(300);

      digitalWrite(2, LOW); //1
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);// activa el LED
      delay(300);

      digitalWrite(2, HIGH); //2
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);// activa el LED
      delay(300);

      digitalWrite(2, HIGH); //3
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);// activa el LED
      delay(300);


      digitalWrite(2, LOW); //4
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);// activa el LED
      delay(300);

      
      digitalWrite(2, HIGH); //5
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);// activa el LED
      delay(300);

      digitalWrite(2, HIGH); //6
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);// activa el LED
      delay(300);

       digitalWrite(2, HIGH); //7
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);// activa el LED
      delay(300);


      
      digitalWrite(2, HIGH); //8
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);// activa el LED
      delay(300);

       
   //9
    digitalWrite(2,HIGH); // enciende el LED
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH); // enciende el LED
    digitalWrite(5,LOW);
    digitalWrite(6,LOW); // enciende el LED
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH); // enciende el LED
     digitalWrite(9,LOW);
    delay(300);


   

    
}

