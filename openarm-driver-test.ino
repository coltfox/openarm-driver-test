#include "bldc_driver.h"

// Hin: Highside PWM, Sin: Shutdown pin, Cur: current sense pin (input)
#define HIN_A 11   // High-side PWM
#define SIN_A 7    // Shutdown pin
#define CUR_A A1    // Current sense

#define HIN_B 10
#define SIN_B 6
#define CUR_B A2

#define HIN_C 9
#define SIN_C 5
#define CUR_C A3

BLDCDriver driver(HIN_A, SIN_A, CUR_A,
                  HIN_B, SIN_B, CUR_B,
                  HIN_C, SIN_C, CUR_C);

void setup() {
  driver.begin();
  driver.start();

  driver.setSpeed(127);
}

void loop() {
  driver.commutate();
}
