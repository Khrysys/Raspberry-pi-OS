#include "Layer.h"
#include <iostream>

using namespace std;

class Net {
        int layers;
        int cells[10];
        int sublayers[10];
        int function;
        int constraints[10];
        
        void Train() {

        }

        void Test() {

        }

        void Generate() {
            
        }

    protected:
        int epoch;
        int outputs[10];

        void Build() {
            Generate();
        }

        void Run() {
            epoch = 0;
            Generate();
            while(true) {
                Train();
                Test();
            }
        }
   
};