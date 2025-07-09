#ifndef Monocon_h
#define Monocon_h
    #include <Arduino.h>

    class Actuator {
    public:
        enum Side {
            L,
            R
        };
        enum Number {
            Num0,
            Num1,
            Num2,
            Num3,
            Num4,
            Num5,
            Num6,
            Num7,
            Num8,
            Num9,
            None
        };
        const int clockPin;
        const int buzzerPin;
        const int* segmentPin;
        const int* segmentVcc;
        const int* motorPin;

        Actuator(const int clockPin = 0, const int buzzerPin = 0, const int segmentPin[8] = 0, const int segmentVcc[2] = 0, const int motorPin[2] = 0);
        ~Actuator();
        void segment(Side side, Number num, bool displayDots = false);
        void motor(Side side, const unsigned long ms);
        void motorStop();
        void buzzer(const int hertz);
    };
#endif
