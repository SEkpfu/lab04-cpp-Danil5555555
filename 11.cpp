#include <iostream>
#include <cmath>
using namespace std;

double triangleArea(int base, int height) {
    return 0.5 * base * height;
}

double triangleArea(int a, int b, int angle) {
    return 0.5 * a * b * sin(angle * 3.141592653589793 / 180.0);
}

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    cout << triangleArea(10, 5) << endl;
    cout << triangleArea(6, 8, 90) << endl;
    cout << triangleArea(3.0, 4.0, 5.0) << endl;

    int b, h, s1, s2, ang;
    double x, y, z;
    cin >> b >> h >> s1 >> s2 >> ang >> x >> y >> z;

    cout << triangleArea(b, h) << endl;
    cout << triangleArea(s1, s2, ang) << endl;
    cout << triangleArea(x, y, z) << endl;

    return 0;
}
