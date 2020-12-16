#include <myLibrary.h>
#define Trigger1 2
#define Echo1 3
#define Trigger2 4
#define Echo2 5

int m1 = 25, m2 = 35;

HCSR04 USS1(Trigger1, Echo1, m1);
HCSR04 USS2(Trigger2, Echo2, m2);


void setup()
{
  Serial.begin(115200);
}

void loop()
{
  int distance1 = USS1.distance(m1);
  Serial.print("Distance1 = " + String(distance1) + "     ");
  

  int distance2 = USS2.distance(m2);
  Serial.println("Distance2 = " + String(distance2));
  

}
