// ========================================================================================
// ========================================================================================
// ========================================================================================
// ============== Taken from here https://github.com/paulhamsh/SparkIO ====================
// ========================================================================================
// ========================================================================================
// ========================================================================================
// ========================================================================================

#ifndef Spark_h
#define Spark_h

#include <Arduino.h>
#ifdef DEBUG_ENABLE
#define DEBUG(x) Serial.println((String)(millis()/1000) + "s. " + x)
#else
#define DEBUG(x)
#endif

#define STR_LEN 40
//#define CHUNK_BUF_LEN 1000


typedef struct  {
  uint8_t  curr_preset;
  uint8_t  preset_num;
  char UUID[STR_LEN];
  char Name[STR_LEN];
  char Version[STR_LEN];
  char Description[STR_LEN];
  char Icon[STR_LEN];
  float BPM;
  struct SparkEffects {
    char EffectName[STR_LEN];
    bool OnOff;
    uint8_t  NumParameters;
    float Parameters[10];
  } effects[7];
  uint8_t chksum;
} SparkPreset;

typedef struct {
  uint8_t param1;
  uint8_t param2;
  uint8_t param3;
  uint8_t param4;
  uint32_t param5;
  float val;
  char str1[STR_LEN];
  char str2[STR_LEN];
  bool onoff;
} SparkMessage;


#endif
