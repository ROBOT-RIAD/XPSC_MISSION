#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll ans = 0;
        int i;
        fo(i, 1, n) {
            int x;
            cin >> x;
            ans += x;
        }
        cout <<-ans << endl;
    }
    return 0;
}
