#include "input.h"

void Input::init(char SingleMachine) {
  singleMachine = SingleMachine;
  switchDemoSoundsOff = 0;
  firePressedAtStart = 0;
  fire_raw_state = 0;
}

char Input::demoSoundsOff() {
  return 0;
}

unsigned char Input::buttons_get(void) {
  return 0;
}

Input &Input::onVolumeUpDown(THandlerVolume fn) {
  _volume_callback = fn;
  return *this;
}

Input &Input::onDoReset(THandlerDoReset fn) {
  _doReset_callback = fn;
  return *this;
}

Input &Input::onDoAttractReset(THandlerDoAttractReset fn) {
  _doAttractReset_callback = fn;
  return *this;
}

