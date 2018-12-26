#include <M5Stack.h>
#include "display_ch.h"
#include "str.h"

DisplayCh displaych;
void setup() {
  
  M5.begin();
  
  // Use HZK16 and ASC16 font set
  // NOTE: font file should be copied to your TF card.
#if 0
  //Depending on SD card font 
  displaych.loadHzk16(ExternalHzk16,"/Fonts/HZK16","/Fonts/ASC16");
#else
   //Dependence on internal fonts 
  displaych.loadHzk16();
#endif
  //displaych.loadHzk16("/Fonts/HZK16","/Fonts/ASC16");
  // Set text with white foreground color and black background color
  displaych.setTextColor(WHITE, BLACK);
  
  // Set text with red highlight color
  displaych.setHighlightColor(RED);
  
  // Set text size to 1
  displaych.setTextSize(1);
  displaych.setCursor(0,0,1);
  displaych.writeHzk(AscStr);
  // Print some ASCII text on the screen
  delay(1000);
  // Highlight the text
  displaych.highlight(true);
  displaych.setCursor(0,32);
  displaych.writeHzk(AscStr);
  delay(1000); 
  // Clear screen
  //M5.Lcd.clear();
  // Turn highlight off
  displaych.highlight(false);
  displaych.setCursor(0,70);
  // print some GBK text on the screen
  displaych.writeHzk(GbkStr);
  
  delay(1000);
  displaych.highlight(true);
  displaych.setCursor(0,90);
  displaych.writeHzk(GbkStr);
  
  delay(1000);
  displaych.fillScreen(BLACK);
 
  // Set text size to 2
  displaych.setTextSize(2);
  displaych.setCursor(0,0);
  displaych.highlight(false);
  displaych.writeHzk(AscStr);
  delay(1000);
  displaych.highlight(true);
  displaych.setCursor(0,70);
  displaych.writeHzk(AscStr);  
  delay(1000);
  
  //displaych.clear();
  displaych.highlight(false);
  displaych.setCursor(0,145);
  displaych.writeHzk(GbkStr);
  delay(1000);
  displaych.highlight(true);
  displaych.setCursor(0,195);
  displaych.writeHzk(GbkStr);

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
