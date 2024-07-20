  // definimos las variables
  int ledRojo = 2;
  int ledRojoP = 3;
  int ledAmarillo = 5;
  int ledAmarilloP = 6;
  int ledVerde = 8; 
  int ledVerdeP = 7; 

void setup() {
  // definimos los leds como salida
  pinMode (ledRojo, OUTPUT);
  pinMode (ledAmarillo, OUTPUT);
  pinMode (ledVerde, OUTPUT);
  pinMode (ledRojoP, OUTPUT);
  pinMode (ledAmarilloP, OUTPUT);
  pinMode (ledVerdeP, OUTPUT);
}

void loop() {
  //bucle de programación del semáforo
  
  digitalWrite (ledRojo, HIGH);         
  digitalWrite (ledVerdeP, HIGH);                //encendemos el led rojo del semáforo 1 en simultáneo con el led verde del semáforo 2
  delay (10000);                        //tiempo que permanecerán encendidos
  digitalWrite (ledRojo, LOW);        //apagamos los dos leds (rojo y verde P)
  digitalWrite (ledVerdeP, LOW);
  digitalWrite (ledAmarillo, HIGH);   //encendemos los leds amarillo de ambos semaforos
  digitalWrite (ledAmarilloP, HIGH);
  delay (3000);                        //tiempo que permanece encendido el led amarillo
  digitalWrite (ledAmarillo, LOW);    //apagamos los leds amarillos de ambos semaforos
  digitalWrite (ledAmarilloP, LOW);
  digitalWrite (ledVerde, HIGH);      //encendemos los leds verde del semaforo 1, en simultaneo con el led rojo del semaforo 2
  digitalWrite (ledRojoP, HIGH);
  delay (10000);                        //tiempo que permanecen encendidos los leds de ambos semaforos
  digitalWrite (ledVerde, LOW);
  digitalWrite (ledRojoP, LOW);
  digitalWrite (ledAmarillo, HIGH);   //encendemos los leds amarillo de ambos semaforos
  digitalWrite (ledAmarilloP, HIGH);
  delay (3000);                        //tiempo que permanece encendido el led amarillo
  digitalWrite (ledAmarillo, LOW);    //apagamos los leds amarillos de ambos semaforos
  digitalWrite (ledAmarilloP, LOW);
}
