#include <bits/stdc++.h>
#define fo(i, s, n) for(int i = s; i < n; i++)
#define ffo(i, s, n) for(int i = s; i <= n; i++)
#define ll long long int
using namespace std;

vector<int> construct(int f, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back((i < f - 1) ? (i + 2) : 1);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;

        int ans = 1;
        for (int f = 1; f < k; ++f) {
            vector<int> d = construct(f, k - 1);
            int sum_d = 0;
            for (int x : d) {
                sum_d += x;
            }
            if (sum_d <= n - 1) {
                ans = f;
            }
        }

        vector<int> res = {1};
        vector<int> d = construct(ans, k - 1);
        for (int x : d) {
            res.push_back(res.back() + x);
        }

        for (int x : res) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
