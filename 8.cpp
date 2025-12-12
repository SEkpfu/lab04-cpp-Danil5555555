#include <iostream>
#include <cmath>
using namespace std;

bool solveQuadratic(double a, double b, double c, double* x1, double* x2) {
    double D = b * b - 4 * a * c;
    if (D < 0) {
        return false;
    }
    *x1 = (-b + sqrt(D)) / (2 * a);
    *x2 = (-b - sqrt(D)) / (2 * a);
    return true;
}

int main() {
    double x1, x2;

    if (solveQuadratic(4, -5, 1, &x1, &x2)) {
        cout << x1 << " " << x2 << endl;
    } else {
        cout << "No real roots" << endl;
    }

    if (solveQuadratic(13, 2, 5, &x1, &x2)) {
        cout << x1 << " " << x2 << endl;
    } else {
        cout << "No real roots" << endl;
    }

    if (solveQuadratic(1, -4, 4, &x1, &x2)) {
        cout << x1 << " " << x2 << endl;
    } else {
        cout << "No real roots" << endl;
    }

    return 0;
}
