
#include <ESP8266WiFi.h>
#include<ESP8266WebServer.h>
//#include <LiquidCrystal.h>
// setting our wifi name and password:hj
#define ssid "Motor Controller"
#define passcode "123456789"
// setting our ip adress for local,subnet and geteway:
IPAddress local_ip(192, 168, 10, 10);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);
// instantiating an esp8266webserver object with the value of 80:
ESP8266WebServer server(80);

/*
    declaring pin-out on nodemcu for the ultrasonic sensor and the pump and the pump_pin status:

*/
const int d0 = 16;
const int d1 = 5;
const int d2 = 4;
const int d3 = 0;
const int d4 = 2;
const int d5 = 14;
const int d6 = 12;
const int d7 = 13;
const int d8 = 15;
const int sd2 = 9;
const int sd3 = 10;

/*
  finally declaring the pin out of the pump and ultrasonic pinout with respect to the pin out on the node-mcu.

*/

int pump_pin = d0; // the pump will be connected to the D0 pin on the node-mcu.
int trig_pin = d1; // the trig-pin will be connected to the D1 pin ont the node-mcu.
int echo_pin = d2; // the echo-pin will be connected to the D2 pin of tyhe node-mcu.
//const int trig_pin = 0;   // gpio d3
//const int echo_pin = 2;   // gpio d4
/*
   declaring pin-out for the lcd screen on the node-mcu:

*/


/*
   finnally declaring pin-out for the lcd with respect to the pin-out on the node-mcu:

*/
int RS = d3 ;
int EN = d4 ;
int D4 = d5 ;
int D5 = d6 ;
int D6 = d7 ;
int D7 = sd3 ;

/*
   creating an lcd object.

*/

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

bool pump_pin_status = LOW;
bool pump_pin_status_online;
int water_level ;
long duration ;
String pump_status;
int tank_height ;

void setup() { // put your code here to run once:
  lcd.begin(16, 2);
  Serial.begin(115200);
  WiFi.softAP(ssid, passcode);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);
  lcd.print("INTELEGENT WATER");
  lcd.setCursor(0, 1);
  lcd.print("MANGEMENT SYSTEM");
  delay(2000);
  lcd.clear();
  lcd.print("   STARTING...");
  delay(1000);
    WATER_LEVEL();
}



void WATER_LEVEL() {
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  pinMode(echo_pin, INPUT);
  duration = pulseIn(echo_pin, HIGH);
  duration = duration / 2;
  int cm = duration * 0.034;
  water_level = map(cm, 3, 18, 100, 0);
  water_level = constrain(water_level, 0, 100);
}
void LCD() {
  lcd.clear();
  //  lcd.setCursor(0,0);
  lcd.print("WATER LEVEL=");
  lcd.print(water_level);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("PUMP: ");
  lcd.print(pump_status);
  delay(200);
  Serial.println("printing");
}

void STRING_UPDATE() {
  if (pump_pin_status == HIGH) {
    pump_status = "ON";
  }
  else {
    pump_status = "OFF";
  }
}




void loop() { // put your code here to run repeatedly:
  STRING_UPDATE();
  LCD();
}
