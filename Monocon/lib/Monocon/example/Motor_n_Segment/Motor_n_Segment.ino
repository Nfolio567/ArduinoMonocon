#include <Arduino.h>
#include <Monocon.h>

using Side = Actuator::Side;
using Content = Actuator::Content;

constexpr int segment[] = {40, 41, 42, 43, 44, 45, 46, 47};
constexpr int segmentVcc[] = {24, 25};
constexpr int motor[] = {44, 45};
constexpr int clock = 29;

Actuator actuator(clock, 0, segment, segmentVcc, motor, nullptr);

void setup() {
  for (const int i : segment) pinMode(i, OUTPUT);
  // ↑ モーターと７セグはピン共通なのでピンのモード定義はどっちか書くだけでいい。
  for (const int i : segmentVcc) pinMode(i, OUTPUT);
  pinMode(clock, OUTPUT);
}

void loop() {
  actuator.segmentStop();
  actuator.motor(Side::LEFT, 50, 1);
  actuator.segment(Side::LEFT, Content::A);
  delay(1);
}
