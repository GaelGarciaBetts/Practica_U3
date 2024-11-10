int w=0; //Entrada dipswitch1
int x=0; //Entrada dipswitch2
int y=0; //Entrada dipswitch3
int z=0; //Entrada dipswitch4

void encender(int a, int b, int c, int d, int e, int f, int g)
{
  //Asigna un segmento del display a cada pin
  digitalWrite(22, a);  //Asigna el segmento 'a' al pin 2
  digitalWrite(23, b);  //Asigna el segmento 'b' al pin 3
  digitalWrite(24, c);  //Asigna el segmento 'c' al pin 4
  digitalWrite(25, d);  //Asigna el segmento 'd' al pin 5
  digitalWrite(26, e);  //Asigna el segmento 'e' al pin 6
  digitalWrite(27, f);  //Asigna el segmento 'f' al pin 7
  digitalWrite(28, g);  //Asigna el segmento 'g' al pin 8
}

void setup() {

  //Inicializa los pines como entradas/salidas digitales

  pinMode(22, OUTPUT); //'a'
  pinMode(23, OUTPUT); //'b' 
  pinMode(24, OUTPUT); //'c' 
  pinMode(25, OUTPUT); //'d'
  pinMode(26, OUTPUT); //'e'
  pinMode(27, OUTPUT); //'f'
  pinMode(28, OUTPUT); //'g'
  pinMode(4, INPUT); //'w'
  pinMode(5, INPUT); //'x'
  pinMode(6, INPUT); //'y'
  pinMode(7, INPUT); //'z'
}

void loop() {

  w=digitalRead(4);  //Asignar variables del dipswitch a los pines
  x=digitalRead(5);  //Asignar variables del dipswitch a los pines
  y=digitalRead(6);  //Asignar variables del dipswitch a los pines
  z=digitalRead(7);  //Asignar variables del dipswitch a los pines

  //Combinaciones del dipswitch para encender cada parte del display
  //Envia estados (1 y 0) al display dependiendo del numero a mostrar

  if (!w && !x && !y && !z){
    encender (0, 0, 0, 0, 0, 0, 1); //Muestra el numero 0
  }

  if (w && !x && !y && !z){
    encender (1, 0, 0, 1, 1, 1, 1);//Muestra el numero 1
  }

  if (!w && x && !y && !z){
    encender (0, 0, 1, 0, 0, 1, 0); //Muestra el numero 2
  }   

  if (w && x && !y && !z){
    encender (0, 0, 0, 0, 1, 1, 0); //Muestra el numero 3
  }
      
  if (!w && !x && y && !z){
    encender (1, 0, 0, 1, 1, 0, 0); //Muestra el numero 4
  }
      
  if (w && !x && y && !z){
    encender (0, 1, 0, 0, 1, 0, 0); //Muestra el numero 5
  }

  if (!w && x && y && !z){
    encender (0, 1, 0, 0, 0, 0, 0); //Muestra el numero 6
  }

  if (w && x && y && !z){
    encender (0, 0, 0, 1, 1, 1, 1); //Muestra el numero 7
  }

  if (!w && !x && !y && z){
    encender (0, 0, 0, 0, 0, 0, 0); //Muestra el numero 8
  }

  if (w && !x && !y && z){
    encender (0, 0, 0, 1, 1, 0, 0); //Muestra el numero 9
  }

  if (!w && x && !y && z){
    encender (0, 0, 0, 1, 0, 0, 0); //Muestra el numero 10(A)
  }
      
  if (w && x && !y && z){
    encender (1, 1, 0, 0, 0, 0, 0); //Muestra el numero 11(B)
  }

  if (!w && !x && y && z){
    encender (0, 1, 1, 0, 0, 0, 1); //Muestra el numero 12(C)
  }

  if (w && !x && y && z){
    encender (1, 0, 0, 0, 0, 1, 0); //Muestra el numero 13(D)
  }

  if (!w && x && y && z){
    encender (0, 1, 1, 0, 0, 0, 0); //Muestra el numero 14(E)
  }

  if (w && x && y && z){
    encender (0, 1, 1, 1, 0, 0, 0); //Muestra el numero 15(F)
  }
    
}