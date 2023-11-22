#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the value of N

        int current = 1;
        int oddRow = 1;
        int evenRow = 2;

        // If N is odd, print the matrix
        if (n % 2 == 1) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j % 2 == 0) {
                        cout << current << " ";
                    } else {
                        cout << current + 1 << " ";
                        current += 2;
                    }
                }
                cout << endl;
                current = (i % 2 == 0) ? oddRow : evenRow;
                oddRow += 2;
                evenRow += 2;
            }
        } else {
            // If N is even, print the matrix
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j % 2 == 0) {
                        cout << current << " ";
                    } else {
                        cout << current + 1 << " ";
                        current += 2;
                    }
                }
                cout << endl;
                current = (i % 2 == 0) ? evenRow : oddRow;
                oddRow += 2;
                evenRow += 2;
            }
        }
    }

    return 0;
}
