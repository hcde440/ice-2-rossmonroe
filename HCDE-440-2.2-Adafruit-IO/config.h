/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME    "rossmonroe"
#define IO_KEY         "6eeb5d596d5f424babafd00eadb73229"

/******************************* WIFI **************************************/

#define WIFI_SSID       "University of Washington"
#define WIFI_PASS       ""

#include "AdafruitIO_WiFi.h"
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

