#include <iostream>
#include <vector>
using namespace std;

void findRookMoves(char column, int row) {
    for (char c = 'a'; c <= 'h'; ++c) {
        if (c != column) {
            cout << c << row << endl;
        }
    }
    for (int r = 1; r <= 8; ++r) {
        if (r != row) {
            cout << column << r << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string position;
        cin >> position;

        char column = position[0];
        int row = position[1] - '0';

        findRookMoves(column, row);
    }

    return 0;
}
