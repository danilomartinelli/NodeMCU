#include <pgmspace.h>
 
#define SECRET
 
const char WIFI_SSID[] = "***";               //WIFI NAME
const char WIFI_PASSWORD[] = "***";           //WIFI PASSWORD
 
#define THINGNAME "***"
 
int8_t TIME_ZONE = 3; // +3 UTC
 
const char MQTT_HOST[] = "***";  // MQTT Host
 
 
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
-----END CERTIFICATE-----
)EOF";
 
 
// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
-----END CERTIFICATE-----

)KEY";
 
 
// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
-----END RSA PRIVATE KEY-----

)KEY";
