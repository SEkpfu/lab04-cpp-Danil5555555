#include <iostream>
using namespace std;

bool isLuckyTicket(int number) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        sum2 += number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; i++) {
        sum1 += number % 10;
        number /= 10;
    }
    return sum1 == sum2;
}

bool isLuckyTicket(int d1, int d2, int d3, int d4, int d5, int d6) {
    return (d1 + d2 + d3) == (d4 + d5 + d6);
}

bool isLuckyTicket(int firstHalf, int secondHalf) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++) {
        sum1 += firstHalf % 10;
        firstHalf /= 10;
        sum2 += secondHalf % 10;
        secondHalf /= 10;
    }
    return sum1 == sum2;
}

int main() {
    int full, p1, p2;
    int d1, d2, d3, d4, d5, d6;

    cin >> full;
    cout << isLuckyTicket(full) << endl;

    cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;
    cout << isLuckyTicket(d1, d2, d3, d4, d5, d6) << endl;

    cin >> p1 >> p2;
    cout << isLuckyTicket(p1, p2) << endl;

    return 0;
}
