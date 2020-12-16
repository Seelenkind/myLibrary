#ifndef myLibrary_H
#define myLibrary_H
#include <Arduino.h>

/*
 * **************************************************
 * HCSR04 Ultrasonic sensör ile mesafe ölçümü
 * **************************************************
 */
class HCSR04 {
  private:
    byte Trigger;
    byte Echo;
    int  m;
  public:
    HCSR04 (byte Trigger, byte Echo, int m);
    int distance(int m) ;
 };
 /*
 * *************************************************
 */

#endif
