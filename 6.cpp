#include <iostream>
using namespace std;

char signChar(int num) {
    if (num >= 0) return '+';
    return '-';
}

void printNumberText(int num) {
    switch(num) {
        case 0: cout << "ноль"; break;
        case 1: cout << "один"; break;
        case 2: cout << "два"; break;
        case 3: cout << "три"; break;
        case 4: cout << "четыре"; break;
        case 5: cout << "пять"; break;
        case 6: cout << "шесть"; break;
        case 7: cout << "семь"; break;
        case 8: cout << "восемь"; break;
        case 9: cout << "девять"; break;
        case 10: cout << "десять"; break;
    }
}

int main() {
    int num;
    cin >> num;

    if (num >= 0 && num <= 10) {
        cout << signChar(num) << " ";
        printNumberText(num);
    } else if (num < 0 && num >= -10) {
        cout << signChar(num) << " ";
        printNumberText(-num);
    }
    cout << endl;

    return 0;
}
