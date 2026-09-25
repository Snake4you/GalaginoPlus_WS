#ifndef AUDIO_H
#define AUDIO_H

class machineBase;

class Audio {
public:
  void init() {}
  void start(machineBase *machineBase) {}
  void transmit() {}
  void volumeUpDown(bool up, bool down) {}
  void mute(bool m) {}
};

#endif

