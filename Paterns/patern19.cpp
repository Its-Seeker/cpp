#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {

        // spaces
        int space = row - 1;

        while (space) {
            cout << "  ";
            space--;
        }

        // numbers
        int col = row;

        while (col <= n) {
            cout << row << " ";
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}