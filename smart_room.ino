
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#define light1 D5
#define light2 D6

#define FIREBASE_HOST "Firebase-HostName"
#define FIREBASE_AUTH "Firebase-Secret-Token"
#define WIFI_SSID "wifi-name"
#define WIFI_PASSWORD "wifi-password"


void setup() {

  pinMode(light1,OUTPUT);
  pinMode(light2,OUTPUT);
  digitalWrite(light1,HIGH);
  digitalWrite(light2,HIGH);

  Serial.begin(115200);
   
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  
}
void loop() {
int status1 = Firebase.getString("firebase/bulb1").toInt();
int status2 = Firebase.getString("firebase/bulb2").toInt();

if(status1){
  digitalWrite(light1,LOW);
  Serial.println("Turning light-1 ON!!");
}else{
  digitalWrite(light1,HIGH);
  Serial.println("light-1 Going DOWN.");
}

if(status2){
  digitalWrite(light2,LOW);
  Serial.println("Turning light-2 ON!!");
}else{
  digitalWrite(light2,HIGH);
  Serial.println("light-2 Going DOWN.");
}

}
