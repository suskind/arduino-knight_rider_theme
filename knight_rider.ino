/** 
 * ****************************************************** *
 * Arduino Knight Rider - Leds & Theme                    *
 * Gamboa <gamboa AT_NO_SPAM pdvel.com>                   *
 * First Arduino project (Yeah this is a disclaimer :P)   *
 * ****************************************************** *
 */

#include "pitches.h" 

/* NOTES AND TONES */
const int pinTone = 8;

typedef struct {
  int note;
  int tempo;
} notesType;

const notesType aNotes[] = {
    // 1
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    // 2
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    // 3
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, 
    {NOTE_A4, 125}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_GS4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, {NOTE_A4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 250}, {NOTE_GS4, 125}, {NOTE_G4, 125}, 
    {NOTE_G4, 125}, {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_GS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    {NOTE_FS4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, {NOTE_G4, 125}, 
    // solo 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 1500}, 
    {NOTE_A5, 250}, {NOTE_AS5, 125}, {NOTE_A5, 125}, {NOTE_E5, 1500}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 250}, {NOTE_A5, 250}, {NOTE_G5, 2000}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 1500}, 
    {NOTE_A5, 250}, {NOTE_AS5, 125}, {NOTE_A5, 125}, {NOTE_E5, 1500}, 
    {NOTE_A4, 250}, {NOTE_AS4, 125}, {NOTE_A4, 125}, {NOTE_E5, 250}, {NOTE_A5, 250}, {NOTE_AS5, 2500}, {NOTE_G5, 250}, {NOTE_A5, 500}
};

int noteIndex = -1;
int totalNotes;

unsigned long tonePrevTime = 0;
int noteDelay = aNotes[(noteIndex + 1)].tempo;


/* LEDS */
const int pinLed[] = {3, 5, 6, 9, 10, 11}; /* PWM pins */

int ledIndex = -2;
int ledOrder = 1;
const int ledHighValue = 255; /* not used */
const int ledFadeValue = 70;
const int ledOffValue = 0; /* not used */
int totalLeds;

unsigned long ledPrevTime = 0;
const int ledDelay = 125;

unsigned long curTime = 0; 

/* CONTROLER/SWITCH */
int pinControlOut = 13;
int pinControlIn = 12;
int controlDelay = 1000;
unsigned long controlPrevTime = 0;
int isLedControlerOn = 0;

int _playLed = 0;
int _playNote = 0;

/* SETUP */
void setup() {
    
    pinMode(pinTone, OUTPUT); 
    pinMode(pinControlOut, OUTPUT);
    pinMode(pinControlIn, INPUT);

    digitalWrite(pinControlOut, HIGH);
    isLedControlerOn = 1;

    resetLeds(1);

    totalLeds = sizeof(pinLed) / sizeof(int); 
    totalNotes = sizeof(aNotes) / sizeof(notesType); 
}

/* LOOP */
void loop() {

    //unsigned long curTime = millis();
    curTime = millis();
  
    /* CONTROLER/SWITCH */
    if(curTime - controlPrevTime > controlDelay) {
        controlPrevTime = curTime;
        if(digitalRead(pinControlIn) == HIGH) {
            if(isLedControlerOn == 1) {
                digitalWrite(pinControlOut, LOW);
                isLedControlerOn = 0;
                _playLed = 1;
                _playNote = 1;
            } else {
                digitalWrite(pinControlOut, HIGH);
                isLedControlerOn = 1;
                resetLeds(0);
                resetTones();
            }
        }
    }

    /* LEDS */
    if(curTime - ledPrevTime > ledDelay && _playLed == 1) { 
        ledPrevTime = curTime;

        if(ledIndex > -2 && ledIndex < (totalLeds - 1)) { 
            if(pinLed[(ledIndex + 1)] == 11 || pinLed[(ledIndex + 1)] == 3) { // hack to tone() & analogWrite on pin 3 & 11
                digitalWrite(pinLed[(ledIndex + 1)], HIGH);
            } else {
                analogWrite(pinLed[(ledIndex + 1)], ledFadeValue);
            }
            //analogWrite(pinLed[(ledIndex + 1)], ledFadeValue);
        }
        if(ledIndex > -1 && ledIndex <  totalLeds) {
            //analogWrite(pinLed[ledIndex], ledHighValue);
            digitalWrite(pinLed[ledIndex], HIGH);
        }
        if(ledIndex > 0 && ledIndex < (totalLeds + 1)) { 
            if(pinLed[(ledIndex - 1)] == 11 || pinLed[(ledIndex - 1)] == 3) { // hack to tone() & analogWrite on pin 3 & 11
                digitalWrite(pinLed[(ledIndex - 1)], HIGH);
            } else {
                analogWrite(pinLed[(ledIndex - 1)], ledFadeValue);
            }
            //analogWrite(pinLed[(ledIndex - 1)], ledFadeValue);
        }
        if(ledOrder == 1 && ledIndex > 1 && ledIndex < (totalLeds + 2)) { 
            //analogWrite(pinLed[(ledIndex - 2)], ledOffValue);
            digitalWrite(pinLed[(ledIndex - 2)], LOW);
        } else if(ledOrder == -1 && ledIndex > -3 && ledIndex < (totalLeds - 2)) { 
            //analogWrite(pinLed[(ledIndex + 2)], ledOffValue);
            digitalWrite(pinLed[(ledIndex + 2)], LOW);
        }

        ledIndex += ledOrder;

        if(ledIndex == (totalLeds + 2) && ledOrder == 1) {
            ledOrder = -1;
        } else if(ledIndex == -3 && ledOrder == -1){
            ledOrder = 1;
        }
    }
  
  
    /* NOTES AND TONES */ 
    if(curTime - tonePrevTime >= noteDelay && _playNote == 1) {
        noteIndex++;
        tonePrevTime = curTime;
        noTone(pinTone);
        tone(pinTone, aNotes[noteIndex].note, aNotes[noteIndex].tempo);

        noteDelay = aNotes[noteIndex].tempo;

        if(noteIndex >= totalNotes) {
            noteIndex = -1;
            noteDelay = 10;
        }
    }
  
} 

/**
 * Reset or init leds 
 */
void resetLeds(int setPinMode) {
    int i;
    _playLed = 0;
    for(i=0; i < (sizeof(pinLed) / sizeof(int)); i++) {
        if(setPinMode == 1) {
            pinMode(pinLed[i], OUTPUT);
        }
        //analogWrite(pinLed[i], 0);
        digitalWrite(pinLed[i], LOW);
    }
    ledIndex = -2;
    ledOrder = 1;
}

/**
 * Reset tones 
 */
void resetTones() {
    _playNote = 0;
    noteIndex = -1;
    noteDelay = aNotes[(noteIndex + 1)].tempo;
} 




