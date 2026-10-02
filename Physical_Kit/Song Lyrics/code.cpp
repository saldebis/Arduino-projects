#include <LiquidCrystal.h>

// Initialize the library with your exact parallel interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define a structure to hold the timestamp and the two lines of text
struct LyricLine {
  unsigned long timestamp;
  const char* line1;
  const char* line2;
};

// Map out the four lines of "Haru Haru" by BIGBANG
// (Note: The physical LCD ROM will display corrupted characters for Hangul)
LyricLine lyrics[] = {
  {0,     "Dolaboji malgo",   "tteonagara"},       // Starts at 0 seconds
  {4000,  "Tto nareul chaji", "malgo saragaraha"}, // Happens at 4 seconds
  {7000,  "Neoreul",          "saranghaessgie"},   // 4000 + 3000 gap = 7000
  {9000,  "hhuhoeeopgie",     ""},                 // 7000 + 2000 gap = 9000
  {11000, "Johatdeon",        "gieokman"},         // 9000 + 2000 gap = 11000
  {14000, "gajyeogara-ha",    ""}                  // 11000 + 3000 gap = 14000
};

// Declare tracking variables in the global scope so loop() can see them
const int numLines = sizeof(lyrics) / sizeof(lyrics[0]);
int currentLine = 0;
unsigned long startTime;

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  startTime = millis(); // Record the exact millisecond the program starts
}

void loop() {
  if (currentLine < numLines) {
    // Check if elapsed time has surpassed the timestamp for the next lyric
    if (millis() - startTime >= lyrics[currentLine].timestamp) {
      lcd.clear(); // Wipe the old text before writing the new text
      
      // Print the first line
      lcd.setCursor(0, 0);
      lcd.print(lyrics[currentLine].line1);
      
      // Print the second line if it contains text
      if (strlen(lyrics[currentLine].line2) > 0) {
        lcd.setCursor(0, 1);
        lcd.print(lyrics[currentLine].line2);
      }
      
      currentLine++;
    }
  }
}
