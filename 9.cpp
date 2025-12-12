#include <iostream>
using namespace std;

bool f(double x, double &result) {
    if (x <= 2) {
        if (x == 0) return false;
        if (x == 1) return false;
        result = (2 * x + 1.0 / (1 - x)) / (3 * x);
        return true;
    } else if (x <= 5) {
        result = 10.0 * 2.0 / 7.0;
        return true;
    } else {
        result = -3 - x;
        return true;
    }
}

int main() {
    double a, b;
    cin >> a >> b;

    double val1, val2, val3, val4, val5, val6;
    double expr1 = 0, expr2 = 0;

    if (f(2, val1) && f(0, val2) && f(a, val3)) {
        expr1 = val1 - val2 * val3;
    }

    if (f(2 * a, val4) && f(6, val5) && f(a * b, val6)) {
        expr2 = val4 - val5 + val6;
    }

    cout << expr1 << " " << expr2 << endl;

    return 0;
}
