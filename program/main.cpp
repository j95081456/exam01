#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
      uLCD.printf("\n107061246\n"); //Default Green on black text
      uLCD.line(20,20,20,40,RED);
      uLCD.line(20,20,40,20,RED);
      uLCD.line(20,40,40,40,RED);
      uLCD.line(40,20,40,40,RED);
}