#include "mbed.h"
#include "mbed_trace.h"
#include "fdc1004.hpp"
#include "test.hpp"
#include "level_sensor.hpp"
#include "max31865.hpp"
#include "max31865_continuous.hpp"
#include "EthernetInterface.h"
#include "w5500_header.hpp"
#include "testw5500.hpp"
#include "w5500example.hpp"
#include "modbusExample.hpp"


int main(void)
{
  // printf("STM 32 new board");
  // runFDC1004Test();
  // levelSensor();
  modbusExample();
  // runW5500Test();
  // serverExampleTCP();
  // clientExampleTCP();
  // MAX31865_Continuous maxObj;
  // maxObj.Run();
  return 0;
}
