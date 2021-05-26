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
        void Build();
        void Run();
   
};