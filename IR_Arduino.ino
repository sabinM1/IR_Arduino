#include <Time.h>
#include <TimeLib.h>
#include <IRremote.h>

IRsend irsend;

void setup() {
  Serial.begin(9600); // initialize Serial communication
  //while(!Serial) ;    // wait for serial port to connect.

  // set the current time to
  //      hh, mm, ss, month, day, year
  setTime(23, 15, 00,     6,   2, 2020);
}

void loop() {
  Serial.print("Time now is: ");
  print2digits(hour());
  Serial.print(":");
  print2digits(minute());
  Serial.print(":");
  print2digits(second());
  Serial.print(" ");
  Serial.print(day());
  Serial.print("/");
  Serial.print(month());
  Serial.print("/");
  Serial.print(year());
  Serial.println();

  if ((hour())==23 && (minute())==1 && ((second())==1 or (second())==2)) //sometimes it doesn't register the first time
    irsend.sendNEC(0xFFB04F, 32);
  if ((hour())==2 && (minute())==1 && ((second())==1 or (second())==2))  //sometimes it doesn't register the first time
    irsend.sendNEC(0xFFF807, 32);
  delay(1000);
}

void print2digits(int number) {
  if (number >= 0 && number < 10) {
    Serial.print('0');
  }
  Serial.print(number);
}



//    irsend.sendNEC(0xFFB04F, 32); //sau 32 idk sau 20
//    delay(500);
//    irsend.sendNEC(0xFFF807, 32);
//    delay(500);

/*
 * FFB04F - ON 
 * FFF807 - OFF 
 */
