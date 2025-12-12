#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double f(double x) {
    if (x < 0) {
        return 1.0 / 3.0;
    } else if (x < 2 * PI) {
        return x * x - 3.0;
    } else {
        return (1.0 + x * x * x) / (2.0 * x);
    }
}

int main() {
    double a, b;
    cin >> a >> b;
    double result = 12.5 + f(2.0) - f(4.0) * f(10.0) + f(a) - f(b) + f(a * b);
    cout << result << endl;

    double x[7], y[7];
    for (int i = 0; i < 7; i++) {
        cin >> x[i];
        y[i] = f(x[i]);
    }

    for (int i = 0; i < 7; i++) {
        cout << y[i] << " ";
    }
    cout << endl;

    int negative_count = 0;
    double max_element = y[0];
    for (int i = 0; i < 7; i++) {
        if (y[i] < 0) {
            negative_count++;
        }
        if (y[i] > max_element) {
            max_element = y[i];
        }
    }

    cout << negative_count << " " << max_element << endl;

    return 0;
}
