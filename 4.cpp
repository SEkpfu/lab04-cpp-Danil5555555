#include <iostream>
using namespace std;

void square4() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void squareN(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void squareNM(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cout << " ";
        }
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void chessBoard(int n, int m) {
    for (int row = 0; row < n; row++) {
        for (int line = 0; line < m; line++) {
            for (int col = 0; col < n; col++) {
                char fill = ((row + col) % 2 == 0) ? '*' : ' ';
                for (int k = 0; k < m; k++) {
                    cout << fill;
                }
            }
            cout << endl;
        }
    }
}

int main() {
    square4();
    cout << endl;

    int n;
    cin >> n;
    squareN(n);
    cout << endl;

    int m;
    cin >> n >> m;
    squareNM(n, m);
    cout << endl;

    cin >> n >> m;
    chessBoard(n, m);

    return 0;
}
