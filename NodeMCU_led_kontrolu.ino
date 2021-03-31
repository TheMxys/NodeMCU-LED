
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "8Z83twqz3FiRvsoLun6oJV2wv-S3tTb4";


char ssid[] = "SUPERONLINE_ADG";
char pass[] = "753123753123a";

#define led1 16
#define led2 5
#define led3 4

void setup()
{
  
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
 
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V1) {
 int buton = param.asInt();
    digitalWrite(led1, HIGH); 
    delay(5000);
    digitalWrite(led2, HIGH); 
    delay(5000);
    digitalWrite(led3, HIGH); 
    delay(5000);
    digitalWrite(led2, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    delay(5000);
}
