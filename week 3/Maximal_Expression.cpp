#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N, K;
        cin >> N >> K;

        long long max_result = -1;
        long long X = -1;

        long long q = N / K;
        long long r = N % K;
        long long i = min(K / 2, r);
        
        long long result = (i % K) * ((N - i) % K);

        if (result > max_result) {
            max_result = result;
            X = i;
        }

        cout << X << endl;
    }

    return 0;
}
