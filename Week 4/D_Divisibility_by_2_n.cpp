#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> v2;
        int count = 0, ans = 0;
        fo(i, 0, n) {
            cin >> v[i];
            int x = v[i];
            while (x % 2 == 0) {
                count++;
                x /= 2;
            }
        }
        for (int i = 1; i < n + 1; i++) {
            int x = i;
            int tmp = 0;
            while (x % 2 == 0) {
                x /= 2;
                tmp++;
            }
            v2.push_back(tmp);
        }
        sort(v2.begin(), v2.end(), greater<int>());
        if (count >= n) {
            cout << 0 << endl;
            continue; 
        }
        for (int i = 0; i < v2.size(); i++) {
            if (count + v2[i] >= n) {
                count = n;
                ans++;
                break;
            }
            count += v2[i];
            ans++;
        }
        if (count < n) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
        v.clear();
    }
    return 0;
}
