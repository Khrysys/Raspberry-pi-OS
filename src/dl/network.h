#include "Layer.h"
#include <iostream>

using namespace std;

class Net {
    public:
        int layers;
        int cells[10];
        int sublayers[10];
        int function;
        int outputs;
        int constraints[10];
        void Build() {

        }

        void Run() {
            epoch = 0;
            Generate();
            while(true) {
                Train();
                Test();
            }
        }

    private:
        void Train() {

        }

        void Test() {

        }

        void Generate() {
            if (layers == 1) {
                Layer layer1;
                layer1.cells = [cells];
            }
        }

    protected:
        int epoch;
        Layer layerArray[];
   
};