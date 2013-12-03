#include <MIDI.h>

void HandleControlChange(byte channel, byte number, byte value){
  if(number == 25){
    if(value == 127){
      digitalWrite(13, HIGH);
    }
    if(value == 0){
      digitalWrite(13, LOW);
    }
  }
}


void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  MIDI.begin(MIDI_CHANNEL_OMNI);    
  MIDI.setHandleControlChange(HandleControlChange);
}


void loop() {

  MIDI.read();

}
