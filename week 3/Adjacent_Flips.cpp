#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        bool all_zeros = true;
        bool all_ones = true;

        for (int i = 0; i < N; i++) {
            if (S[i] == '0') {
                all_ones = false;
            } else {
                all_zeros = false;
            }
        }

        if (all_zeros || all_ones) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
