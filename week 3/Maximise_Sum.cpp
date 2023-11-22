#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<long long> v(n);
        fo(i, 0, n) {
            cin >> v[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n - 1) {
                sum += v[i];
            } else {
                sum += min(v[i - 1], v[i + 1]);
            }
        }
        cout << sum << endl;
    }

    return 0;
}
