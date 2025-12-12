#include <iostream>
using namespace std;

double average(double a, double b) {
    return (a + b) / 2.0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

double average(double a, double b, double c, double d) {
    return (a + b + c + d) / 4.0;
}

int main() {
    cout << average(2.5, 3.5) << endl;
    cout << average(1.0, 2.0, 3.0) << endl;
    cout << average(1.0, 2.0, 3.0, 4.0) << endl;

    double x, y, z, w;
    cin >> x >> y >> z >> w;
    cout << average(x, y) << endl;
    cout << average(x, y, z) << endl;
    cout << average(x, y, z, w) << endl;

    return 0;
}
