## Class diagram Sensor Library (ToF)

The following class diagram is used:

classDiagram
class I2CHelper {
    <<Singleton>>
    +static I2CHelper& getInstance()
    +void setAddress(uint8_t address)
    +template <typename T> T readRegister(uint16_t reg)
    +template <typename T> void writeRegister(uint16_t reg, T value)
    -I2CHelper()
    -TwoWire* _wire
    -uint8_t _address
}

class VL6180X {
    +VL6180X(uint8_t address = 0x29, TwoWire* wire = &Wire)
    +bool begin()
    +bool init()
    +bool configureDefault()
    +uint8_t readRangeSingle()
    +uint8_t readRangeContinuous()
    +uint8_t getModelId()
    +void startSingleRangeMeasurement()
    +bool isDataReady()
    +uint8_t getRange()
    +void clearInterrupt()
    -uint8_t _address
    -TwoWire* _i2c
    -I2CHelper _i2cHelper
    -static const uint16_t IDENTIFICATION__MODEL_ID
    -static const uint16_t SYSRANGE__START
    -static const uint16_t ... (other register addresses)
}

VL6180X --> I2CHelper : uses
