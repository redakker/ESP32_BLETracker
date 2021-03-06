#include "config.h"
extern char _printbuffer_[256];
#if defined(DEBUG_SERIAL)
#define DEBUG_PRINT(x) Serial.print(x)
#define DEBUG_PRINTLN(x) Serial.println(x)
#define DEBUG_PRINTF(x,...) {\
snprintf(_printbuffer_,255,x,__VA_ARGS__);\
Serial.print(_printbuffer_);\
}
#else
#define DEBUG_PRINT(x)
#define DEBUG_PRINTLN(x)
#define DEBUG_PRINTF(x,...) 
#endif
#define SERIAL_PRINTF(x,...) {\
snprintf(_printbuffer_,255,x,__VA_ARGS__);\
Serial.print(_printbuffer_);\
}