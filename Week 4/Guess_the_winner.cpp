#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1001;
vector<bool> is_prime(MAXN, true);
vector<int> grundy(MAXN, -1);


int calculateGrundy(int N) {
    if (N == 0) return 0;
    if (grundy[N] != -1) return grundy[N];

    vector<int> moves;
    for (int p = 3; p <= N; p += 2) {
        if (is_prime[p] && N % p == 0) {
            moves.push_back(calculateGrundy(N - p));
        }
    }
    int mex = 0;
    while (find(moves.begin(), moves.end(), mex) != moves.end()) {
        mex++;
    }

    return grundy[N] = mex;
}

int main() {
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= MAXN; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= MAXN; i += p) {
                is_prime[i] = false;
            }
        }
    }

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int ans = calculateGrundy(N);
        if (ans == 0) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
