#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double power(int x, int n) {
    double result = 1.0;
    bool negative = false;

    if (n < 0) {
        negative = true;
        n = -n;
    }

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    if (negative) {
        result = 1.0 / result;
    }

    return result;
}

int main() {
    int N, M;
    cin >> N >> M;

    double combination = (double)(factorial(N) * factorial(M)) / factorial(N + M);
    cout << combination << endl;

    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;

    return 0;
}
