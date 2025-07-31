#ifndef Monocon_h
#define Monocon_h
    //#include <Arduino.h>
    // 可変抵抗の抵抗値の左右中央の値
    // left
    #define minVRL 0
    #define maxVRL 479
    // center
    #define minVRC 480
    #define maxVRC 530
    // right
    #define minVRR 531
    #define maxVRR 1023
    class Actuator {
      private:
        const int segmentData[26][7] = {
          {1, 1, 1, 1, 1, 1, 0}, // 0       <====0====>
          {0, 1, 1, 0, 0, 0, 0}, // 1      ^           ^
          {1, 1, 0, 1, 1, 0, 1}, // 2      ║5          ║1
          {1, 1, 1, 1, 0, 0, 1}, // 3      ║           ║
          {0, 1, 1, 0, 0, 1, 1}, // 4      ⌄           ⌄
          {1, 0, 1, 1, 0, 1, 1}, // 5       <====6====>
          {1, 0, 1, 1, 1, 1, 1}, // 6      ^           ^
          {1, 1, 1, 0, 0, 1, 0}, // 7      ║4          ║2
          {1, 1, 1, 1, 1, 1, 1}, // 8      ║           ║
          {1, 1, 1, 1, 0, 1, 1}, // 9      ⌄           ⌄
          {1, 1, 1, 0, 1, 1, 1}, // A       <====3====>
          {0, 0, 1, 1, 1, 1, 1}, // b
          {1, 0, 0, 1, 1, 1, 0}, // C
          {0, 1, 1, 1, 1, 0, 1}, // d
          {1, 0, 0, 1, 1, 1, 1}, // E
          {1, 0, 0, 0, 1, 1, 1}, // F
          {1, 0, 1, 1, 1, 1, 0}, // G
          {0, 1, 1, 0, 1, 1, 1}, // H
          {1, 0, 1, 0, 1, 1, 1}, // K
          {0, 0, 0, 1, 1, 1, 0}, // L
          {1, 1, 1, 0, 1, 1, 0}, // M
          {0, 0, 1, 0, 1, 0, 1}, // n
          {0, 0, 0, 0, 1, 0, 1}, // r
          {0, 0, 1, 1, 0, 1, 1}, // S
          {0, 1, 0, 1, 0, 1, 0}, // W
          {0, 0, 0, 0, 0, 0, 0} // None 
        };

        const int clockPin;
        const int buzzerPin;
        const int* segmentPin;
        const int* segmentVcc;
        const int* motorPin;
        const int* stMotorPin;

      public:
        const int steps[4][4] = {{1,0,0,1},{1,0,1,0},{0,1,1,0},{0,1,0,1}};

        enum class Side {
            LEFT,
            RIGHT
        };

        enum class Content {
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
            A,
            b,
            C,
            d,
            E,
            F,
            G,
            H,
            K,
            L,
            M,
            n,
            r,
            S,
            W,
            None
        };

        explicit Actuator(int clockPin = 0, int buzzerPin = 0, const int segmentPin[8] = nullptr, const int segmentVcc[2] = nullptr, const int motorPin[2] = nullptr, const int stMotorPin[4] = nullptr);

        ~Actuator();

        /**
         * @param side LEFT or RIGHT
         * @param content Content to be displayed
         * @param displayDots Whether to display dot or not(false)
         */
        void segment(Side side, Content content, bool displayDots = false) const;

        /**
         * Turn off the segment
         */
        void segmentStop() const;


        /**
         * Run the motor
         * @param side LEFT or RIGHT
         * @param pmw PMW (0~255)
         * @param ms Running time
         */
        void motor(Side side, int pmw, unsigned long ms) const;

        /**
         * Stop the motor
         */
        void motorStop() const;

        
        /**
         * Sound the buzzer
         * (正直、全然使わなかった...)
         * @param hertz Sounding frequency
         * @param ms Sounding time
         */
        void buzzer(int hertz, unsigned long ms) const;


        /**
         * Run Stepping motor
         * @param side LEFT or RIGHT
         * @param step Specifies which step to activate (not how many steps to move)
         */
        void steppingMotor(Side side, int step) const;
    };
#endif
