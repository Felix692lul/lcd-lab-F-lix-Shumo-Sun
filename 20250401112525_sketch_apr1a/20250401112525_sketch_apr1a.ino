#include <LiquidCrystal.h>

const int buttonPin = 3;
const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;

LiquidCrystal Icd(rs, en, d4, d5, d6, d7);


void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, 3);
Icd.begin(16,2);
Serial.begin(9600);
randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
Icd.clear();
Icd.print("Changed for lab 11");

while (digitalRead(3) == HIGH) {}

delay(200);

reactionGame();
}

void reactionGame(){
Icd.clear();
Icd.print("Get Ready");

delay(random(3000, 6001));

Icd.clear();
Icd.print("Press fast");

unsigned long startTime = millis();
while(digitalRead(3) == HIGH){
}
unsigned long reactionTime = (millis()-startTime);

Icd.clear();
Icd.print("Your time:");
Icd.setCursor(0,1);
Icd.print("reactionTime");
Icd.print("ms");

delay(3000);

}
