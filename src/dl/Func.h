#include <Error.h>
#include <cmath>

double e = 2.721;
double hold;

double Tanh(double a[], double b[]) {
    hold = DotProduct(a, b);
    hold = pow(e, (2 * hold));
    return ((hold - 1) / (hold + 1));
}

double DotProduct(double a[], double b[]) {
    hold = 0;
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        hold += (a[i] * b[i]);
    }

    return hold;
}

double ReLU(double a[], double b[]) {
    if (sizeof(a) != sizeof(b)) {
        Status(600);
        return -1;
    } else {
        hold = DotProduct(a, b);
        if (hold < 0) {
            return 0;
        } else {
            return hold;
        }
    }
}