#include <DFRobot_OzoneSensor.h>

#define COLLECT_NUMBER 20 //what is this? <-> collect number, the collection range is 1-100

#define OZONE1_ADDR OZONE_ADDRESS_3 //ozone1 at i2c address 0x73
#define OZONE2_ADDR OZONE_ADDRESS_2 //ozone2 at i2c address 0x72
/*   iic slave Address, The default is ADDRESS_3
       ADDRESS_0               0x70      // iic device address
       ADDRESS_1               0x71
       ADDRESS_2               0x72
       ADDRESS_3               0x73
*/

// declare sensor classes
DFRobot_OzoneSensor Ozone1;
DFRobot_OzoneSensor Ozone2;

void setup() {
  Serial.begin(9600);
  
  // is it practical to rewrite to report "Error on *address*"
  while (!Ozone1.begin(OZONE1_ADDR) && !Ozone2.begin(OZONE2_ADDR)) {
    Serial.println("I2c device number error!");
    delay(1000);
  }
  Serial.println("I2c connect success !");

  Ozone1.setModes(MEASURE_MODE_PASSIVE);
  Ozone2.setModes(MEASURE_MODE_PASSIVE);
  /*   Set iic mode, active mode or passive mode
       MEASURE_MODE_AUTOMATIC            // active  mode
       MEASURE_MODE_PASSIVE              // passive mode
  */
}

void loop() {
  int16_t intO3 = Ozone1.readOzoneData(COLLECT_NUMBER);
  int16_t extO3 = Ozone2.readOzoneData(COLLECT_NUMBER);
  /*   Smooth data collection
       COLLECT_NUMBER                    // The collection range is 1-100
  */
  Serial.print("Ozone concentration: ");
  Serial.print(intO3);
  Serial.print(" PPB inside, ");
  Serial.print(extO3);
  Serial.println(" PPB outside.");
  delay(1000);
}
