#ifndef Monocon_h
#define Monocon_h
    #include <Arduino.h>

    class Monocon {
    private:
        /* data */
    public:
        enum Side {
            L,
            R,
            ST
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
        Monocon(const int clockPinNum);
        ~Monocon();
        void segment(const int pinNum[8], const int vccPinNum[2], Side side, Number num, bool displayDots);
        void motor(const int pinNum[2], Side side);
    };
#endif
