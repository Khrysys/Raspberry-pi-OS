#include <Error.h>

double Func(int a[], int b[]) {
    if (sizeof(a) != sizeof(b)) {
        Status(600);
        return -1;
    } else {
        
    }
    return 0;
}
double DotProduct(int a[], int b[]) {
    double hold = 0;
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        hold += (a[i] * b[i]);
    }
    return hold;
}