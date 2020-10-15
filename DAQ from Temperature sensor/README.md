# DAQ using MLX90614

The MLX90614 is an Infra Red thermometer for noncontact temperature measurements. Both the IR sensitive thermopile detector chip and the signal conditioning ASSP are integrated in the same TO-39 can.

![download (2)](https://user-images.githubusercontent.com/64604283/96120805-bd9ae000-0f0c-11eb-95f3-059daa3e153f.jpg)

## Connections :

1. Connect GND to common power/data ground
2. Connect VIN to the power supply, for the 3V sensor this is about 3.3V. For the 5V version, use about 5VDC
3. Connect the SDA pin to the I2C data SDA pin on your Arduino. On an UNO & '328 based Arduino, this is also known as A4, on a Mega it is also known as digital 20 and on a Leonardo/Micro, digital 2
4. Connect the SCL pin to the I2C clock SCL pin on your Arduino. On an UNO & '328 based Arduino, this is also known as A5, on a Mega it is also known as digital 21 and on a Leonardo/Micro, digital 3

**MLX90614 needs necessary library file to communicate with it. We have to include "Adafruit_MLX90614" library on our arduino IDE.**

## Follow the steps to include those library :

1. Open Arduino IDE
2. Navigate to the "Sketch" tab, and click on "include library".
3. Type "Adafruit_MLX90614" in search bar.
4. List of library files will appear on the screen, select the latest version and click install.
