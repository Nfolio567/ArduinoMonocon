#include <Arduino.h>
#include <Monocon.h>

Monocon::Monocon(const int clockPinNum) {
    pinMode (clockPinNum, 1); // 1=out, 0=in
}

Monocon::~Monocon() {
}

void Monocon::segment(const int pinNum[8], const int vccPinNum[2], Side side, Number num, bool displayDots) {
    if(side == L){
        digitalWrite(vccPinNum[0],LOW);
        switch (num){
            case 0: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);//0
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], LOW);
                digitalWrite(pinNum[7], displayDots);
            }
            case 1: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], LOW);//1
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], LOW);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], LOW);
                digitalWrite(pinNum[6], LOW);
                digitalWrite(pinNum[7], displayDots); 
            }
            case 2: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);//2
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], LOW);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], LOW);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);
            }
            case 3: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);//3
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], LOW);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);
            }
            case 4: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], LOW);//4
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], LOW);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);
            }
            case 5: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);//5
                digitalWrite(pinNum[1], LOW);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);
            }
            case 6: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);//6
                digitalWrite(pinNum[1], LOW);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);
            }
            case 7: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);//7
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], LOW);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], LOW);
                digitalWrite(pinNum[7], displayDots);
            }
            case 8: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);
            }
            case 9: {
                digitalWrite(vccPinNum[1], HIGH);
                digitalWrite(pinNum[0], HIGH);//9
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case None: {
                digitalWrite(vccPinNum[1], 1);
                digitalWrite(pinNum[0], 0);//nothing
                digitalWrite(pinNum[1], 0);
                digitalWrite(pinNum[2], 0);
                digitalWrite(pinNum[3], 0);
                digitalWrite(pinNum[4], 0);
                digitalWrite(pinNum[5], 0);
                digitalWrite(pinNum[6], 0);
                digitalWrite(pinNum[7], displayDots);
            }
        }
    }else if(side == R){
        digitalWrite(vccPinNum[1],LOW);
        switch(num){
            case 0: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);//0
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], LOW);
                digitalWrite(pinNum[7], displayDots);   

            }
            case 1: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], LOW);//1
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], LOW);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], LOW);
                digitalWrite(pinNum[6], LOW);
                digitalWrite(pinNum[7], displayDots);  

            }
            case 2: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);//2
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], LOW);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], LOW);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case 3: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);//3
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], LOW);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case 4: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], LOW);//4
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], LOW);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case 5: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);//5
                digitalWrite(pinNum[1], LOW);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case 6: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);//6
                digitalWrite(pinNum[1], LOW);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case 7: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);//7
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], LOW);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], LOW);
                digitalWrite(pinNum[7], displayDots);

            }
            case 8: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], HIGH);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case 9: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], HIGH);//9
                digitalWrite(pinNum[1], HIGH);
                digitalWrite(pinNum[2], HIGH);
                digitalWrite(pinNum[3], HIGH);
                digitalWrite(pinNum[4], LOW);
                digitalWrite(pinNum[5], HIGH);
                digitalWrite(pinNum[6], HIGH);
                digitalWrite(pinNum[7], displayDots);

            }
            case None: {
                digitalWrite(vccPinNum[0], HIGH);
                digitalWrite(pinNum[0], 0);//nothing
                digitalWrite(pinNum[1], 0);
                digitalWrite(pinNum[2], 0);
                digitalWrite(pinNum[3], 0);
                digitalWrite(pinNum[4], 0);
                digitalWrite(pinNum[5], 0);
                digitalWrite(pinNum[6], 0);
                digitalWrite(pinNum[7], displayDots);
                
            }
        }
    }
}

void Monocon::motor(const int pinNum[2], Side side) {

}
