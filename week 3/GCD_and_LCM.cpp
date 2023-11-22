#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;
        
        ll ali = gcd(x, y);
        ll vov = lcm(x, y);
        
        if (k % 2 == 0) {
            cout << 2 * ali << endl;
        } else {
            cout << vov << endl;
        }
    }
    
    return 0;
}