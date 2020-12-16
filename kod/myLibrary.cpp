#include <myLibrary.h>

/*
 * **************************************************
 * HCSR04 Ultrasonic sensör ile mesafe ölçümü
 * **************************************************
 */
HCSR04::HCSR04 (byte Trigger, byte Echo, int m)
{
  this->Trigger   = Trigger;
  this->Echo = Echo;
  this->m = m;
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
}

int HCSR04::distance(int m)
{
  int distance = 0;
  for (int i = 0; i < m; i++)
  {
    int time = 0;
    digitalWrite(Trigger, LOW);
    delayMicroseconds(3);
    noInterrupts();
    digitalWrite(Trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(Trigger, LOW);
    time = pulseIn(Echo, HIGH);
    interrupts();
    distance += time / 2 / 29.1;
  }
  distance /= m;
  if (distance < 3) distance = 3;
  return distance;
}
/*
 * ***************************************************
 */
