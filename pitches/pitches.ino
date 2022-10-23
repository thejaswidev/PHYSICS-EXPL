#include"pitches.h"

// notes in the song 'Mukkathe Penne'
int melody[] = {
NOTE_DS3,NOTE_DS3,NOTE_AS3,NOTE_G3,NOTE_F3, 0,


};

// note durations: 8 = quarter note, 4 = 8th note, etc.
int noteDurations[] = {       //duration of the notes
8,8,4,8,4,4
};

int speed=90;  //higher value, slower notes
void setup() {

Serial.begin(9600);

}

void loop() {
// no need to repeat the melody.
for (int thisNote = 0; melody[thisNote]!=-1; thisNote++) {

int noteDuration = speed*noteDurations[thisNote];
tone(3, melody[thisNote],noteDuration*.95);
Serial.println(melody[thisNote]);

delay(noteDuration);

//noTone(3);
}
}
