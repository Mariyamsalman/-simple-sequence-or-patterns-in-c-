#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i += 2) { // i controls the number of stars in each row
        // Print spaces to center-align the pyramid
        for (int j = (9 - i) / 2; j > 0; j--) {
            cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << "\n";
    }

    return 0;
}

