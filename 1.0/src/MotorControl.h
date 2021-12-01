#include <wiringPi.h>
#include <softPwm.h>
#include <iostream>

using namespace std;

#define NUM_MOTOR 8
#define MIN_SPEED 0.4
#define MAX_SPEED 0.9
#define RANGE 1
#define DIF_SPEED (MAX_SPEED - MIN_SPEED)
#define PINS [0, 1, 2, 3, 4, 5, 6, 7]
#define COOL_FAN_PIN 8

class MotorControl {
    MotorSpeed ms;
    class MotorSpeed {
        public:
            void Setup() {
                for (i = 0; i < NUM_LEDS; i++) {
                    softPwmCreate(ledMap[i], 0, RANGE);
                    printf ("%3d, %3d, %3d\n", i, ledMap [i], values [i]);
                    
                }
                softPwmCreate(COOL_FAN_PIN, 0, RANGE);
            }

            void Controller(int pressed[]) { // Pressed is { YRot, YMov, ZMov, XMov, Speed }
                int tl = ((pressed[0] + pressed[1] + pressed[2] + pressed[3]) * pressed[4]) / 8; // 1, 2
                int tr = ((pressed[0] + pressed[1] + (pressed[2] * -1) + pressed[3]) * pressed[4]) / 8; // 3, 4
                int bl = ((pressed[0] + pressed[1] + pressed[2] + (pressed[3] * -1)) * pressed[4]) / 8; // 7, 8
                int br = ((pressed[0] + pressed[1] + (pressed[2] * -1) + (pressed[3] * -1)) * pressed[4]) / 8; // 7, 8
                cout << tl << ", " << tr << ", " << br << ", " << bl;
                softPwmWrite(PINS[0], (tl + MIN_SPEED));
                softPwmWrite(PINS[1], (tl + MIN_SPEED));
                softPwmWrite(PINS[2], (tr + MIN_SPEED));
                softPwmWrite(PINS[3], (tr + MIN_SPEED));
                softPwmWrite(PINS[4], (br + MIN_SPEED));
                softPwmWrite(PINS[5], (br + MIN_SPEED));
                softPwmWrite(PINS[6], (bl + MIN_SPEED));
                softPwmWrite(PINS[7], (bl + MIN_SPEED));

            }
    };
};