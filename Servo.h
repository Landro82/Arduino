#include <Servo.h> //on importe la bibliothèque Servo
int pinServo=8; // variable pour stocker le pin pour la commande
Servo leServo; // on définit un objet Servo nommé leServo
int ledPin = 13;// Variable pour stocker le pin pour la LED
void setup() {
  leServo.attach(pinServo); // on relie l'objet au pin de commande
  pinMode(ledPin,OUTPUT); // ledPin en mode OUTPUT
}

void loop() {
  leServo.write(0); // on dit à l'objet de mettre le servo à 0°
  diode13(); // appel de la fonction diode13() définie plus bas
  leServo.write(179); // position à 179°, 180° est à éviter
  diode13(); // appel de la fonction
}

void diode13(){
  // on fait clignoter 30 fois la LED 13
  for (int t=0;t<30;t++){
    digitalWrite(ledPin,HIGH);
    delay(100);
    digitalWrite(ledPin,LOW);
    delay(100);
  }
}
