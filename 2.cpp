#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double d = distance(x1, y1, x2, y2);
    cout << d << endl;

    double d1 = distance(x1, y1, 0, 0);
    double d2 = distance(x2, y2, 0, 0);
    cout << d1 << " " << d2 << endl;

    double x3, y3;
    cin >> x3 >> y3;

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    double area = triangleArea(a, b, c);
    cout << area << endl;

    double x4, y4;
    cin >> x4 >> y4;

    double d12 = distance(x1, y1, x2, y2);
    double d23 = distance(x2, y2, x3, y3);
    double d34 = distance(x3, y3, x4, y4);
    double d41 = distance(x4, y4, x1, y1);
    double diag13 = distance(x1, y1, x3, y3);
    double area1 = triangleArea(d12, d23, diag13);
    double area2 = triangleArea(d34, d41, diag13);
    double quadArea = area1 + area2;
    cout << quadArea << endl;

    return 0;
}
