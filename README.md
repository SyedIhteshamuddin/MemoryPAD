# MemoryPAD

<p align="center">
  <img src="https://raw.githubusercontent.com/SyedIhteshamuddin/MemoryPAD/main/CAD/Renders/MemoryPAD-SideView.png" width="48%" />
  <img src="https://raw.githubusercontent.com/SyedIhteshamuddin/MemoryPAD/main/PCB/Renders/MemoryPAD-3D%28isometricView%29.png" width="48%" />
</p>

#### A tiny memory game on a custom PCB. Four buttons, four LEDs, and a Seeed XIAO RP2040. Watch the LEDs light up in a random pattern, then repeat it. Every round adds one more step. Get it wrong and the game resets. 🎮

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

## How to play ⏯️

### 1. Power on. The LEDs chase back and forth while the game waits for you.

### 2. Normal mode: tap any button to start.

### 3. Hard mode: press and hold Button 1 for about 0.6 seconds. Four quick blinks confirm hard mode.

### 4. Watch the LED sequence, then repeat it by pressing the matching buttons in order.

### 5. Each correct round adds one more step and the game speeds up slightly.

### 6. A wrong button or a timeout makes all LEDs blink three times, and the game resets. You can pick normal or hard mode again.


## Project Gallery

### SCHEMATIC

<img width="920" height="842" alt="MemoryPAD Schematic" src="https://github.com/user-attachments/assets/0c12993f-9ff2-4a92-b488-0e5705bf7049" />

It took alot of time for me because many of these components were not available in KiCADs default package! So, I manually hadd to downloadd the symbols, footprints and assign & align the 3d Models of these Components :)

---

### PCB LAYOUT

<img width="1315" height="753" alt="MemoryPAD-PCB" src="https://github.com/user-attachments/assets/e3480df9-0647-4c1d-a370-8047cb458a07" />

<img width="1339" height="813" alt="MemoryPAD-3D(isometricView)" src="https://github.com/user-attachments/assets/9e4b17ea-a060-477c-82de-20c98ada5733" />

It is designed in KiCAD
This PCB has 0 DRC ERRORs :) except some silkscreen warnings (which is negotiable) and this pcb is ready to manufacture!!!

---

### CAD Designing 

This project CAD Designing was done on Onshape and professional Photos were taken in Autodesk Fusion :) 
I've spent over 4 hours designing it, I know this is a pretty bad design but myself who consider themselves as a beginner its pretty good for me! 💀

#### Assembly View

<img width="871" height="536" alt="MemoryPAD-SideView" src="https://github.com/user-attachments/assets/173228b6-ca0c-4ab2-aa1d-541beff9a26d" />


#### Top Plate

<img width="780" height="525" alt="MP TopPlate" src="https://github.com/user-attachments/assets/c25a955f-1dbe-4e97-ad4e-a02e6ac0eb58" />


#### Bottom Case 

<p align="center">
  <img src="Screenshot 2026-11-08 225307" width="49%" />
  <img src="Screenshot 2026-11-08 225403" width="49%" />
</p>

<img width="778" height="541" alt="Screenshot 2026-11-08 225307" src="https://github.com/user-attachments/assets/c300fd7c-12a3-4635-ad57-02e6110998da" />


<img width="954" height="526" alt="Screenshot 2026-11-08 225403" src="https://github.com/user-attachments/assets/c4035d7a-f5df-4ca5-9b97-e8405996774a" />






































