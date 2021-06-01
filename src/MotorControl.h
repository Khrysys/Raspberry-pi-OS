#include <wiringPi.h>
#include <softPwm.h>

#define NUM_MOTOR 8
#define MIN_SPEED 0.4
#define MAX_SPEED 0.9
#define DIF_SPEED (MAX_SPEED - MIN_SPEED)
#define PINS [0, 1, 2, 3, 4, 5, 6, 7]

class MotorControl {
    class MotorSpeed {
            double front; 
            double side;
            double turn;
            // Clockwise, 0-3 is front, 4-7 is back. 1-2, 7-8 is left, 3-6 is right. 

        public:
            void Turn(double val) {
                if (val < 0) {
                    front += val;
                } else if (val > 0) {
                    front -= val;
                } else {
                    return;
                }
            }

            void Rise(double val) {
                if (val < 0) {
                    front += val;
                } else if (val > 0) {
                    front -= val;
                } else {
                    return;
                }
            }

            void Forward(double val) {
                if (val < 0) {
                    front += val;
                } else if (val > 0) {
                    front -= val;
                } else {
                    return;
                }
            }

            void Side(double val) {
                if (val < 0) {
                    front += val;
                } else if (val > 0) {
                    front -= val;
                } else {
                    return;
                }
            }

            void Controller(int pressed[]) { // Pressed is { YRot, YMov, ZMov, XMov, Speed }
                front = 0;
                side = 0;
                turn = 0;
                Turn(pressed[0]);
                Rise(pressed[1]);
                Forward(pressed[2]);
                Side(pressed[3]);
            }
    };
};