#include <Keyboard.h>

void setup() {
  //Init things
  Serial.begin(9600);
  Keyboard.begin();
  //Set pins
  pinMode(2, INPUT_PULLUP);

  //Check
  Serial.println("It works");

}

void loop() {
  //Espada hace contacto
  if (digitalRead(2) == LOW)
  {
    Keyboard.write('A');
    Serial.println("Intento de espadazo.");
  }
  else{Keyboard.releaseAll();}
}
