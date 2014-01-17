/*
Two CC's are combined addatively to give 0-255 range
Six fixtures per floor/rPi OSC source
 ______________________________________________
|  FIXTURE  |  COLOUR  |  CC1  |  DMX Address  |
|----------------------------------------------
|    1      |    R     |   1   |      1        |
|           |    G     |   2   |      2        |
|           |    B     |   3   |      3        |
|----------------------------------------------|
|    2      |    R     |   4   |      4        |
|           |    G     |   5   |      5        |
|           |    B     |   6   |      6        |
|----------------------------------------------|
|    3      |    R     |   7   |      7        |
|           |    G     |   8   |      8        |
|           |    B     |   9   |      9        |
|----------------------------------------------|
|    4      |    R     |  10   |      10       |
|           |    G     |  11   |      11       |
|           |    B     |  12   |      12       |
|----------------------------------------------|
|    5      |    R     |  13   |      13       |
|           |    G     |  14   |      14       |
|           |    B     |  15   |      15       |
|----------------------------------------------|
|    6      |    R     |  16   |      16       |
|           |    G     |  17   |      17       |
|           |    B     |  18   |      18       |
|----------------------------------------------|
*/
#define fixture1R 1
#define fixture1G 2
#define fixture1B 3

#define fixture2R 4
#define fixture2G 5
#define fixture2B 6

#define fixture3R 7
#define fixture3G 8
#define fixture3B 9

#define fixture4R 10
#define fixture4G 11
#define fixture4B 12

#define fixture5R 13
#define fixture5G 14
#define fixture5B 15

#define fixture6R 16
#define fixture6G 17
#define fixture6B 18

#include <MIDI.h>
#include <DmxSimple.h>

void setup(){
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.turnThruOff();
  MIDI.setHandleControlChange(HandleControlChange);

  DmxSimple.usePin(3);
}


void HandleControlChange(byte channel, byte number, byte value) {
//Very simple: maps MIDI CC# 1 to DMX channel 1 multiplied by 2 to give 0-255 range 
  
  //---------------------------------------  Fixture  ---------------------------------------//
  //---------------------------------------     1     ---------------------------------------//
  if(number == fixture1R){
  	DmxSimple.write(fixture1R, value*2);
  }
  if(number == fixture1G){
  	DmxSimple.write(fixture1G, value*2);
  }
  if(number == fixture1B){
  	DmxSimple.write(fixture1B, value*2);
  }
  //---------------------------------------  Fixture  ---------------------------------------//
  //---------------------------------------     2     ---------------------------------------//
  if(number == fixture2R){
  	DmxSimple.write(fixture2R, value*2);
  }
  if(number == fixture2G){
  	DmxSimple.write(fixture2G, value*2);
  }
  if(number == fixture2B){
  	DmxSimple.write(fixture2B, value*2);
  }
  //---------------------------------------  Fixture  ---------------------------------------//
  //---------------------------------------     3     ---------------------------------------//
  if(number == fixture3R){
  	DmxSimple.write(fixture3R, value*2);
  }
  if(number == fixture3G){
  	DmxSimple.write(fixture3G, value*2);
  }
  if(number == fixture3B){
  	DmxSimple.write(fixture3B, value*2);
  }
  //---------------------------------------  Fixture  ---------------------------------------//
  //---------------------------------------     4     ---------------------------------------//
  if(number == fixture4R){
  	DmxSimple.write(fixture4R, value*2);
  }
  if(number == fixture4G){
  	DmxSimple.write(fixture4G, value*2);
  }
  if(number == fixture4B){
  	DmxSimple.write(fixture4B, value*2);
  }
  //---------------------------------------  Fixture  ---------------------------------------//
  //---------------------------------------     5     ---------------------------------------//
  if(number == fixture5R){
  	DmxSimple.write(fixture5R, value*2);
  }
  if(number == fixture5G){
  	DmxSimple.write(fixture5G, value*2);
  }
  if(number == fixture5B){
  	DmxSimple.write(fixture5B, value*2);
  }
  //---------------------------------------  Fixture  ---------------------------------------//
  //---------------------------------------     6     ---------------------------------------//
  if(number == fixture6R){
  	DmxSimple.write(fixture6R, value*2);
  }
  if(number == fixture6G){
  	DmxSimple.write(fixture6G, value*2);
  }
  if(number == fixture6B){
  	DmxSimple.write(fixture6B, value*2);
  }

}


void loop(){
  MIDI.read();
}

