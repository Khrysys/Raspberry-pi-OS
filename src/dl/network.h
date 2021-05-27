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

    private:
        void Train() {

        }

        void Test() {

        }

        void Generate() {
            if (layers == 1) {
                Layer layer1;
                layer1.cells = outputs;
            } else if (layers == 2) {
                Layer layer1, layer2;
                layer1.cells = cells[0];
                layer2.cells = outputs;
            } else if () {
                
            }
        }

    protected:
        int epoch;
        Layer layerArray[];
   
};