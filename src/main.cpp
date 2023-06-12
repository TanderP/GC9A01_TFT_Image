#include "TFT_eSPI.h"
#include "Surprise Pika.h"
TFT_eSPI tft= TFT_eSPI();

TFT_eSprite sprite = TFT_eSprite(&tft);


int imageW=240; // image size must be the same size with the creen or clsoe enough
int imageH=240;

int screenW=240;
int screenH=240;
int m=imageW;

int start=1;
unsigned short imageS[60000]={0}; // edit this screenW * screen H // u can oversize it a bit

// imag comv http://www.rinkydinkelectronics.com/_t_doimageconverter565.php
// at least 300 kb or less
void setup() {
  Serial.begin(115200);
tft.init();
tft.setRotation(2);
tft.setSwapBytes(true);
tft.fillScreen(TFT_BLACK);

}

void loop() {
 tft.pushImage(0,0,screenW,screenH,Surprise_Pika);
 delay(1000);
 Serial.println("done");
}

