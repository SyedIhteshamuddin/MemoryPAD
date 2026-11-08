// MemoryPAD - Simon-style memory game with HARD MODE
// Board: Seeed XIAO RP2040
//
// Start the game by pressing any button (normal mode).
// HOLD BUTTON 1 for ~0.6s at start to play HARD MODE.

const int BUTTONS[4] = {D0, D1, D2, D3};
const int LEDS[4]    = {D7, D8, D9, D10};

const int MAX_LEVEL = 50;

// Difficulty settings (set by applyDifficulty)
bool hardMode = false;
unsigned long inputTimeout = 5000;  // ms allowed per button press
int showTime = 450;                 // LED on-time (ms)
int gapTime  = 200;                 // pause between LEDs (ms)
int minShowTime = 150;
int minGapTime  = 80;
int speedUpShow = 15;               // how much faster each round
int speedUpGap  = 8;

int sequence[MAX_LEVEL];
int level = 0;

void allLeds(bool on) {
  for (int i = 0; i < 4; i++) digitalWrite(LEDS[i], on ? HIGH : LOW);
}

// Buttons go to GND, so pressed = LOW
int readButton() {
  for (int i = 0; i < 4; i++) {
    if (digitalRead(BUTTONS[i]) == LOW) {
      delay(20); // debounce
      if (digitalRead(BUTTONS[i]) == LOW) return i;
    }
  }
  return -1;
}

void waitForRelease(int b) {
  while (digitalRead(BUTTONS[b]) == LOW) delay(5);
  delay(20);
}

void applyDifficulty() {
  if (hardMode) {
    inputTimeout = 3000;
    showTime = 280;
    gapTime = 110;
    minShowTime = 90;
    minGapTime = 40;
    speedUpShow = 25;
    speedUpGap = 12;
  } else {
    inputTimeout = 5000;
    showTime = 450;
    gapTime = 200;
    minShowTime = 150;
    minGapTime = 80;
    speedUpShow = 15;
    speedUpGap = 8;
  }
}

void hardModeAnimation() {
  for (int k = 0; k < 3; k++) {
    allLeds(true);  delay(80);
    allLeds(false); delay(80);
  }
}

void waitForAnyPress() {
  int i = 0;
  while (readButton() == -1) {   // idle chase animation
    allLeds(false);
    digitalWrite(LEDS[i], HIGH);
    i = (i + 1) % 4;
    delay(150);
  }
  allLeds(false);
  randomSeed(micros());          // seed from time of first press

  // Is button 1 still held after 0.6s? -> hard mode
  delay(600);
  hardMode = (digitalRead(BUTTONS[0]) == LOW);
  applyDifficulty();

  while (readButton() != -1) delay(5);   // wait for all buttons released
  delay(200);
  if (hardMode) {
    hardModeAnimation();
    delay(300);
  } else {
    delay(100);
  }
}

void playSequence() {
  delay(500);
  for (int i = 0; i < level; i++) {
    digitalWrite(LEDS[sequence[i]], HIGH);
    delay(showTime);
    digitalWrite(LEDS[sequence[i]], LOW);
    delay(gapTime);
  }
}

bool getPlayerInput() {
  for (int i = 0; i < level; i++) {
    unsigned long start = millis();
    int pressed = -1;
    while (pressed == -1) {
      pressed = readButton();
      if (millis() - start > inputTimeout) return false;
    }
    digitalWrite(LEDS[pressed], HIGH);
    waitForRelease(pressed);
    digitalWrite(LEDS[pressed], LOW);
    if (pressed != sequence[i]) return false;
  }
  return true;
}

void successAnimation() {
  for (int i = 0; i < 4; i++) { digitalWrite(LEDS[i], HIGH); delay(70); }
  delay(150);
  allLeds(false);
  delay(300);
}

void failAnimation() {
  for (int k = 0; k < 3; k++) {
    allLeds(true);  delay(250);
    allLeds(false); delay(250);
  }
}

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(BUTTONS[i], INPUT_PULLUP);
    pinMode(LEDS[i], OUTPUT);
    digitalWrite(LEDS[i], LOW);
  }
  waitForAnyPress();
}

void loop() {
  sequence[level] = random(0, 4);   // add a new random step
  level++;

  playSequence();                   // show the pattern

  if (getPlayerInput()) {
    successAnimation();
    if (showTime > minShowTime) showTime -= speedUpShow;  // speeds up
    if (gapTime  > minGapTime)  gapTime  -= speedUpGap;

    if (level >= MAX_LEVEL) {       // you won!
      for (int i = 0; i < 5; i++) successAnimation();
      level = 0;
      waitForAnyPress();
    }
  } else {                          // wrong or too slow: reset
    failAnimation();
    level = 0;
    waitForAnyPress();              // choose normal/hard again
  }
}
