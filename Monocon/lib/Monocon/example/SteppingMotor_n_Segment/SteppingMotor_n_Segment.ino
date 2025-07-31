#include <Arduino.h>
#include <Monocon.h>

using Side = Actuator::Side;
using Content = Actuator::Content;

constexpr int segment[] = {40, 41, 42, 43, 44, 45, 46, 47};
constexpr int segmentVcc[] = {24, 25};
constexpr int stMotor[] = {40, 41, 42, 43};
constexpr int clock = 29;
int step = 0;

Actuator actuator(clock, 0, segment, segmentVcc, nullptr, stMotor);

void setup() {
  for (const int i : segment) pinMode(i, OUTPUT);
  // ↑ ステッピングモーターと７セグはピン共通なのでピンのモード定義はどっちか書くだけでいい。
  for (const int i : segmentVcc) pinMode(i, OUTPUT);
  pinMode(clock, OUTPUT);
}

void loop() {
  actuator.segmentStop();
  actuator.steppingMotor(Side::LEFT, step);
  step++;
  if (step == 4) step = 0;
  actuator.segment(Side::LEFT, Content::A);
  delay(1);
}
