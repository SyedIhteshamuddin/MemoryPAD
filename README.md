# MemoryPAD

<p align="center">
  <img src="https://raw.githubusercontent.com/SyedIhteshamuddin/MemoryPAD/main/CAD/Renders/MemoryPAD-SideView.png" width="48%" />
  <img src="https://raw.githubusercontent.com/SyedIhteshamuddin/MemoryPAD/main/PCB/Renders/MemoryPAD-3D%28isometricView%29.png" width="48%" />
</p>

#### A tiny memory game on a custom PCB. Four buttons, four LEDs, and a Seeed XIAO RP2040. Watch the LEDs light up in a random pattern, then repeat it. Every round adds one more step. Get it wrong and the game resets.

> **More about the game is discussed in detail down below :)**

## Hardware
- XIAO RP2040
- 4 LEDs
- 4 push switches
- 4 Resistors

---

> **Note:** This ReadME is writtern by Syed Ihteshamuddin (human ofc), So if some mistakes are occurred please highlight.

---

## Overview

I've spent over 15 hours on project! This project is divided in 3 parts; Pcb designing, CAD designing and Firmware. 

It is a tiny memory game where the LEDs light up ranomly and you need to memorize the pattern then you need to press the switches (which are correspont to each LEDs) to move on in the GAME!
Each round adds one more step, if you get one wrong the game resets :( .

It has two difficulty modes; Easy Mode (where lights lightup slowly and more time is given to click the button) and, Hard Mode (Vice Versa of easy mode)

> **The longest sequence is 50 steps. Beat it and you get a victory animation. :)** 

---

## How to play

### 1. Power on. The LEDs chase back and forth while the game waits for you.
### 2. Normal mode: tap any button to start.
### 3. Hard mode: press and hold Button 1 for about 0.6 seconds. Four quick blinks confirm hard mode.
### 4. Watch the LED sequence, then repeat it by pressing the matching buttons in order.
### 5. Each correct round adds one more step and the game speeds up slightly.
### 6. A wrong button or a timeout makes all LEDs blink three times, and the game resets. You can pick normal or hard mode again.


















