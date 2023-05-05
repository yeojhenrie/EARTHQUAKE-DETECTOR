#include <LiquidCrystal_I2C.h>
//#include <BlynkSimpleEsp8266.h>
//#define BLYNK_PRINT Serial
//#define BLYNK_TEMPLATE_ID "TMPL6zi4XQoiq"
//#define BLYNK_TEMPLATE_NAME "New Template"
//#define BLYNK_AUTH_TOKEN "8l_Cp5cN5DsOqW6s8Oo5JY43n0QTw6y1"

LiquidCrystal_I2C lcd(0x27,16,2);
int a;
void setup() {
  //Blynk.begin(BLYNK_AUTH_TOKEN, "PLDTWIFI2.4G", "1014222830");
  lcd.init();
  lcd.clear();         
  lcd.backlight();
  pinMode(16, INPUT);
  pinMode(14, OUTPUT);
  Serial.begin(115200);}

void loop() {
 // Blynk.run();
  a=digitalRead(16);
  if(a==1){
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.print("EARTHQUAKE");
    lcd.setCursor(4,1);
    lcd.print("DETECTED"); 
    digitalWrite(14, HIGH);
    delay(5000);
    digitalWrite(14, LOW);
  }else{
    lcd.clear();
  }
  delay(200);
}
