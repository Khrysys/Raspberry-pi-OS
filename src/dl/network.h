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
        int verified = -1;
        int built = -1;

    void Verify() {
        int hold = 0;
        try {
            if (layers > 10) {
                throw (layers);
            } else {
                hold = 1;

                for (int i = 0; i < (sizeof(cells)/sizeof(cells[0])); i++) {
                    if (sizeof(cells) == sizeof(sublayers)) {
                        throw(hold);
                    }
                }

                hold = 2;

                if (function <=2 || function > 1) {
                    throw(hold);
                } else {
                    hold++;

                    if (outputs < 10) {
                        throw(hold);
                    } else {
                        if (sizeof(constraints)/sizeof(constraints[0]) < outputs) {
                            throw hold++;
                        }
                    }
                }
            }
            

            
        } catch(int var) {
            if(var == 0) {
                cout << "Warning 0: Too many Layers. Maximum is 10.";
            }

            if (var == 1) {
                cout << "Warning 1: Improper use of Sublayers. it is not reccomended to use every cell as a different sublayer.";
            }

            if (var == 2) {
                cout << "Fatal Error 2: Invalid Function. 1 = Sigmoid; 2 = ReLU.";
            }

            if (var == 3) {
                cout << "Warning 3: Too many outputs. Reccommended Maximum is 10.";
            }

        }
        
    }

    void Build() {
        try {
            if (verified != 1) {
                throw(102);
            }


        } catch(int var) {
            if (var == 102) {
                cout << "Error 102: Inputs not verified. ";
            }
        }
    }
};