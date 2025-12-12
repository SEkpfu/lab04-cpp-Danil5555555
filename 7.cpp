#include <iostream>
using namespace std;

double toFahrenheit(double celsius) {
    return 9.0 / 5.0 * celsius + 32.0;
}

double toKelvin(double celsius) {
    return celsius + 273.0;
}

void toBoth(double celsius, double &fahrenheit, double &kelvin) {
    fahrenheit = 9.0 / 5.0 * celsius + 32.0;
    kelvin = celsius + 273.0;
}

int main() {
    double t1, t2;
    cin >> t1 >> t2;

    double f1 = toFahrenheit(t1);
    double k1 = toKelvin(t1);
    cout << f1 << " " << k1 << endl;

    double f2, k2;
    toBoth(t2, f2, k2);
    cout << f2 << " " << k2 << endl;

    return 0;
}
