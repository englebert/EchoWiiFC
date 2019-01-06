#ifndef EEPROM_H_
#define EEPROM_H_

void readGlobalSet();
bool readEEPROM();
void update_constants();
void writeGlobalSet(uint8_t b);
void writeParams(uint8_t b);
void LoadDefaults();
void readPLog(void);
void writePLog(void);
#ifdef ESC_CALIB_SITCK_COMMAND
void writeBootUpConfig(uint8_t b);
uint8_t readBootUpConfig(void);
#endif

#endif /* EEPROM_H_ */
