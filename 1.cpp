#include <iostream>
using namespace std;

double sum(double x, double y) {
    return x + y;
}

double diff(double x, double y) {
    return x - y;
}

double mult(double x, double y) {
    return x * y;
}

int main() {
    double a, b;
    cin >> a >> b;

    double expr = sum(mult(5.0, sum(diff(a, 2.0), b)), mult(1000.0, a));
    cout << expr << endl;

    return 0;
}
