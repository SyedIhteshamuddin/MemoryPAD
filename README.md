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



## Difficulty Settings 

| Setting | Normal | Hard |
|---|---:|---|
| Time allowed per button press | 5s | 3s |
| LED on-time (start) | 450ms | 280ms |
| Gap between LEDs (start) | 200ms | 110ms |
| Speed-up each round | Gentle | Aggressive |


---

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

Check out the design : https://oauth.onshape.com/documents/014831d8ea70480e354d2062/w/38ff175849a8cf937e522ad1/e/ec4d4643da502ab6ee4258d4?renderMode=0&uiState=6af0984c679dc84116f42d09


#### Assembly View

<img width="871" height="536" alt="MemoryPAD-SideView" src="https://github.com/user-attachments/assets/173228b6-ca0c-4ab2-aa1d-541beff9a26d" />


#### Top Plate

<img width="780" height="525" alt="MP TopPlate" src="https://github.com/user-attachments/assets/c25a955f-1dbe-4e97-ad4e-a02e6ac0eb58" />


#### Bottom Case 


<img width="778" height="541" alt="Screenshot 2026-11-08 225307" src="https://github.com/user-attachments/assets/c300fd7c-12a3-4635-ad57-02e6110998da" />


<img width="954" height="526" alt="Screenshot 2026-11-08 225403" src="https://github.com/user-attachments/assets/c4035d7a-f5df-4ca5-9b97-e8405996774a" />


---

## Firmware

The Firmware was coded in Arduino IDE with the help of Claude AI. I also tested it on Wowki.com. 

(I Have zero ball knowledge in coding so i used the help of AI 🤖)

Later, I tested the code in wowki and it works! check out the link below to test it yourself!

#### Wowki-Project Link :  https://wokwi.com/projects/480042506226324481

<img width="1919" height="896" alt="firmware testing pic wowki" src="https://github.com/user-attachments/assets/7fab5f7b-121c-40a1-9b29-924fc820588a" />

<img width="1274" height="943" alt="Screenshot 2026-11-07 205133" src="https://github.com/user-attachments/assets/105ef6f2-21b7-446a-ab20-e47a797862c1" />


---

## BOM - Bill of Materials


| # | Component | Qty | Source | Price |
|---|---|---:|---|---|
| 1 | Seeed Studio XIAO RP2040 | 1 | [Link](https://robu.in/product/seeed-studio-xiao-rp2040-v1-0/) | ~$6.00 |
| 2 | MX-Style Switches | 4 | [Link](https://www.amazon.in/Satmarhz-Mechanical-Keyboard-Switches-mechanical/dp/B0HJYNT2W7/ref=sr_1_2_sspa?dib=eyJ2IjoiMSJ9.mTBvqGG2uqEAxT-1kS6igjgGL5Wqqx1Vwlw2sl_e4btvlBplvmQ74RlM55vIIidWh_Eb_C3Gv59j4iSjulf51OIYY0OdBpjHuKviokFms3A5a9nVMiE4ByCoe5C-Bdl8naVV9mctKkRzj5VZu0b6qdSExzu1MxzBNbDkFK87DtUR0H2lpgVVD9aesWXMNZV5jGu5uOEnRCLVf-aAxvEUTc5UNPCkYI1w529nf0xrgHU.R7B8Wi3NWKFqw39Y0uwiYdYyFf3ggf7MSdyl9aEk8gc&dib_tag=se&keywords=cherry+mx+red+switches&nsdOptOutParam=true&qid=1794162239&sr=8-2-spons&aref=lMElvKNMWv&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) | ~$5.60 |
| 3 | White Blank DSA Keycaps | 4 | [Link](https://www.amazon.in/International-Mechanical-Keyboard-Compatible-Accessory/dp/B0H75Z21F6/ref=sr_1_13?crid=1JLYXHEI2CRNT&dib=eyJ2IjoiMSJ9.1kBH2KkV6YM9Mqzin_IKO0etw5TYQqF0JZ73tFZ6gj948o-mUWDfxMOhR87JZpxy3IQvAX-9VB_JQWKgY-UWVHC3mlvS2X-cihHj_MSxznF62ESxCpCFMcLdsw0goIMOLQrWAvNurYVMpJEwPRv7dltpdlgzFFpZzcrIxuCyksh5pz49lxEiDp3OKhdBnN3EUyoyqWZdQVkOss8ma90LC9ugmZ6zVil_WsB4tklzmzU.5RDTnacTDxza1nyAYF-_BXZAeqfuF-euCjsYqNvoIdU&dib_tag=se&keywords=mx+keyboard+switches+keycaps&qid=1794162469&sprefix=mx+keyboard+switches+keycaps%2Caps%2C343&sr=8-13) | ~$5.40 |
| 4 | Resistors | 4 | [Link](https://robu.in/product/60pcs-taping-metal-film-resistor-14w-1pct-resistance-package/) | ~$1.15 |
| 5 | M3 × 16mm Screws | 2 | [Link](https://robu.in/product/easymech-m3-x-16mm-hex-allen-csk-ss-304-screw-dia-3mm-length-16mm/) | ~$0.40 |
| 6 | Custom PCB | 1 | [Robu.in](https://robu.in) | ~$12.00 |
| 7 | 3D Printed Case | 1 | Printing Legion | ~$12.00 |


| # | Component | Qty | Source | Price | Total Cost (Incl. Shipping) |
|---|---|---:|---|---|---|
| 1 | Seeed Studio XIAO RP2040 | 1 | [Link](https://robu.in/product/seeed-studio-xiao-rp2040-v1-0/) | ~$6.00 | |
| 2 | MX-Style Switches | 4 | [Link](https://www.amazon.in/Satmarhz-Mechanical-Keyboard-Switches-mechanical/dp/B0HJYNT2W7/ref=sr_1_2_sspa?dib=eyJ2IjoiMSJ9.mTBvqGG2uqEAxT-1kS6igjgGL5Wqqx1Vwlw2sl_e4btvlBplvmQ74RlM55vIIidWh_Eb_C3Gv59j4iSjulf51OIYY0OdBpjHuKviokFms3A5a9nVMiE4ByCoe5C-Bdl8naVV9mctKkRzj5VZu0b6qdSExzu1MxzBNbDkFK87DtUR0H2lpgVVD9aesWXMNZV5jGu5uOEnRCLVf-aAxvEUTc5UNPCkYI1w529nf0xrgHU.R7B8Wi3NWKFqw39Y0uwiYdYyFf3ggf7MSdyl9aEk8gc&dib_tag=se&keywords=cherry+mx+red+switches&nsdOptOutParam=true&qid=1794162239&sr=8-2-spons&aref=lMElvKNMWv&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) | ~$5.60 | |
| 3 | White Blank DSA Keycaps | 4 | [Link](https://www.amazon.in/International-Mechanical-Keyboard-Compatible-Accessory/dp/B0H75Z21F6/ref=sr_1_13?crid=1JLYXHEI2CRNT&dib=eyJ2IjoiMSJ9.1kBH2KkV6YM9Mqzin_IKO0etw5TYQqF0JZ73tFZ6gj948o-mUWDfxMOhR87JZpxy3IQvAX-9VB_JQWKgY-UWVHC3mlvS2X-cihHj_MSxznF62ESxCpCFMcLdsw0goIMOLQrWAvNurYVMpJEwPRv7dltpdlgzFFpZzcrIxuCyksh5pz49lxEiDp3OKhdBnN3EUyoyqWZdQVkOss8ma90LC9ugmZ6zVil_WsB4tklzmzU.5RDTnacTDxza1nyAYF-_BXZAeqfuF-euCjsYqNvoIdU&dib_tag=se&keywords=mx+keyboard+switches+keycaps&qid=1794162469&sprefix=mx+keyboard+switches+keycaps%2Caps%2C343&sr=8-13) | ~$5.40 | |
| 4 | Resistors | 4 | [Link](https://robu.in/product/60pcs-taping-metal-film-resistor-14w-1pct-resistance-package/) | ~$1.15 | |
| 5 | M3 × 16mm Screws | 2 | [Link](https://robu.in/product/easymech-m3-x-16mm-hex-allen-csk-ss-304-screw-dia-3mm-length-16mm/) | ~$0.40 | |
| 6 | Custom PCB | 1 | [Robu.in](https://robu.in) | ~$12.00 | |
| 7 | 3D Printed Case | 1 | Printing Legion | ~$12.00 | |
| **Total** | **Complete Build** | | | **~$42.55 (Est.)** | **~$50.00** |

---
## AI Usage

 I used AI for assistance in Firmware and some help in clean documentation. Rest all work is done by me!

---

## Credits

- **HackClub:** - for organizing the program

---

## License

OPEN SOURCE, enjoy :) 

( I aint responsible if it turns out to be a time bomb).
























