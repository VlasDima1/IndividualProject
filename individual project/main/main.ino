#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define JOYSTICK_BUTTON 7

// Initialize LCD (I2C address: 0x27, 16 columns, 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    pinMode(JOYSTICK_BUTTON, INPUT_PULLUP);  // Enable internal pull-up resistor
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Press Joystick");
}

void loop() {
    if (digitalRead(JOYSTICK_BUTTON) == LOW) {  // Button is pressed (active LOW)
        lcd.clear();
        lcd.setCursor(4, 0);  // Centered text
        lcd.print("DUMITRU");
        delay(500);  // Debounce delay
    }
}
