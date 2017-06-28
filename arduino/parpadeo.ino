/*
 * Parpadeo LED
 * Este programa encendera y apagara una LED en el pin 13 con intervalos de 1s
 * 
 * Hecho por Jean Pierre M.
 * 21 de junio 2017
 * JPMR.
 */


 
//void setup//
/*
 * Esta funcion es para inicializar el pin y ponerlo como salida
 */
void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);//pin 13 como salida

}
//void loop//
/*
 * Esta funcion servira para que el programa corra 
 * infinitas veces mientras permanesca conectado
 */
void loop() {
  //encendemos pin
  digitalWrite(13, HIGH)
  delay(1000)//retrasamos el programa
  //apagamos el pin
  digitalWrite(13, LOW)
  delay(1000)//retrasamos el programa
}
