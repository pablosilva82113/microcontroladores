int ledpin;
void bin2(int n,byte cad[4]){
  int c ;
 for (c=0;c<4;c++){
   cad[c]=0;
   c = 3;
   while(n>0){
     cad[c]=n%2;
     n=n/2;
     c--;
   }
  }
  
}
int BIN_a_BDC(int n , byte num[16]){
  int Milllar, Centenas, Decenas, Unidades;
  byte aux[4],a;
  Milllar = 0;
  Centenas = 0;
  Decenas = 0;
  Unidades = n;
  while(Unidades>=10){
    Unidades = Unidades - 10;
    Decenas++;
    if(Decenas==10){
      Decenas = 0;
      Centenas++;
      if(Centenas==10){
        Centenas = 0;
        Milllar++;
      }
    }
  }
 bin2(Milllar,aux);
  for (a=0;a<4;a++){
    num[a]=aux[a];
  }
  bin2(Centenas,aux);
  for (a=4;a<8;a++){
    num[a]=aux[a-4];
  }
  bin2(Decenas,aux);
  for (a=8;a<12;a++){
    num[a]=aux[a-8];
  }
  bin2(Unidades,aux);
  for (a=12;a<16;a++){
    num[a]=aux[a-12];
  }
}
void setup(){
  for(ledpin=34;ledpin<=49;ledpin++){
    pinMode(ledpin,OUTPUT);
  }
}
void loop(){
  byte numero[16],b;
  int n =9753;
  BIN_a_BDC(n,numero);
  for(ledpin=34;ledpin<=49;ledpin++,b--){
    digitalWrite(ledpin,numero[b]);
  }
}

