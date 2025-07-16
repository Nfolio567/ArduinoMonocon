#ifndef Monocon_h
#define Monocon_h
    #include <Arduino.h>
    // 可変抵抗の抵抗値の左右中央の値
    // left
    #define minVRL 0
    #define maxVRL 489
    // center
    #define minVRC 490
    #define maxVRC 510
    // right
    #define minVRR 511
    #define maxVRR 1023
    class Actuator {
      private:
        const int segmentData[21][7] = {
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
          {0, 0, 0, 1, 1, 1, 0}, // L
          {1, 1, 1, 0, 1, 1, 0}, // M
          {0, 0, 0, 0, 1, 0, 1}, // r
          {0, 0, 1, 1, 0, 1, 1}, // S
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
            L,
            M,
            r,
            S,
            None
        };

        /**
         * @param clockPin 
         * @param buzzerPin
         * @param segmentPin
         * @param segmentVcc
         * @param motorPin
         * @param stMotorPin
         */
        Actuator(const int clockPin = 0, const int buzzerPin = 0, const int segmentPin[8] = 0, const int segmentVcc[2] = 0, const int motorPin[2] = 0, const int stMotorPin[4] = 0);
        ~Actuator();
        /**
         * @param side LEFT or RIGHT
         * @param content Content to be displayed
         * @param displayDots Whether to display dot or not(false)
         */
        void segment(Side side, Content content, bool displayDots = false);
        /**
         * Turn off the segment
         */
        void segmentStop();
        /**
         * Restart the segment
         */
        void restartSegment();

        /**
         * Run the motor
         * @param side LEFT or RIGHT
         * @param ms Running time
         */
        void motor(Side side, const unsigned long ms);
        /**
         * Stop the motor
         */
        void motorStop();
        
        /**
         * Sound the buzzer
         * @param hertz Sounding frequency
         * @param ms Sounding time
         */
        void buzzer(const int hertz, unsigned long ms);

        /**
         * Run Stepping motor
         * @param step Specifies which step to activate (not how many steps to move)
         */
        void stepingMotor(Side side, const int step);
    };
#endif
