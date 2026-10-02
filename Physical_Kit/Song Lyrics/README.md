# 🎵 Arduino LCD Song Lyrics

A simple Arduino project that displays **song lyrics on a 16×2 LCD screen**. The project combines basic Arduino programming and electronics to create a small interactive music-themed display.

## 🛠️ Components

* Arduino board
* 16×2 LCD module
* Potentiometer
* Jumper wires
* Breadboard

## 📖 About the Project

For this project, I programmed an Arduino to display song lyrics on an LCD module.

The lyrics are displayed line by line, creating a simple scrolling/sequence effect that allows the LCD to act as a miniature lyric display.

A **potentiometer** is connected to the LCD to adjust the display contrast, while jumper wires are used to connect the components to the Arduino.

## ⚙️ How It Works

1. The Arduino initializes the LCD using the `LiquidCrystal` library.
2. The programmed lyrics are stored in the Arduino code.
3. The lyrics are displayed on the LCD in sequence.
4. Delays are used to control the timing between lines.
5. The potentiometer allows the LCD contrast to be adjusted for better visibility.

## 🔌 Components & Connections

| Component     | Purpose                         |
| ------------- | ------------------------------- |
| Arduino       | Controls the LCD and lyrics     |
| 16×2 LCD      | Displays the lyrics             |
| Potentiometer | Adjusts LCD contrast            |
| Jumper wires  | Connects the components         |
| Breadboard    | Holds and organizes the circuit |

## 🔌 Wiring

### LCD Connections

| LCD Pin | Name                    | Connection                       |
| ------: | ----------------------- | -------------------------------- |
|       1 | GND                     | Arduino GND                      |
|       2 | VDD                     | Arduino 5V                       |
|       3 | V0 (Contrast)           | Middle leg of 10kΩ potentiometer |
|       4 | RS (Register Select)    | Arduino Digital Pin 12           |
|       5 | RW (Read/Write)         | Arduino GND                      |
|       6 | E (Enable)              | Arduino Digital Pin 11           |
|    7–10 | D0–D3                   | Not connected (4-bit mode)       |
|      11 | D4                      | Arduino Digital Pin 5            |
|      12 | D5                      | Arduino Digital Pin 4            |
|      13 | D6                      | Arduino Digital Pin 3            |
|      14 | D7                      | Arduino Digital Pin 2            |
|      15 | BLA (Backlight Anode)   | Arduino 5V through 220Ω resistor |
|      16 | BLK (Backlight Cathode) | Arduino GND                      |

### Potentiometer Connections

| Potentiometer Pin | Connection        |
| ----------------- | ----------------- |
| Outer pin 1       | Arduino 5V        |
| Middle pin        | LCD V0 (Contrast) |
| Outer pin 2       | Arduino GND       |



## 💻 Skills Demonstrated

* Arduino programming
* C/C++ basics
* LCD interfacing
* Electronic circuit wiring
* Using the `LiquidCrystal` library
* Timing and delays
* Hardware-software integration


## 📸 Project Demo

The project displays song lyrics directly on the LCD using an Arduino-based circuit.
