#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        double sum = 0;
        for (int i = 0; i < n; i++) {
            double x;
            cin >> x;
            sum += x;
        }
        double avg = sum / n;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (floor(avg) == avg) {
                if (avg == floor(avg)) {
                    ans += abs(avg - floor(avg));
                }
            } else {
                if (avg > floor(avg)) {
                    ans += ceil(avg) - avg;
                } else {
                    ans += avg - floor(avg);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
