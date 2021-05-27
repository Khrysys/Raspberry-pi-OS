#include <Error.h>

class Cell {
    public:
        int function;
        int inputs;
        int weight;
        double Func(int a[], int b[]) {
            if (sizeof(a) != sizeof(b)) {
                Status(600);
                return -1;
            } else {
                double hold = DotProduct(a, b);
                if (hold < 0) {
                    return 0;
                } else {
                    return hold;
                }
            }
        }

        double DotProduct(int a[], int b[]) {
            double hold = 0;
            for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
                hold += (a[i] * b[i]);
            }
            return hold;
        }

        double TrainWeight() {

        }
    
};