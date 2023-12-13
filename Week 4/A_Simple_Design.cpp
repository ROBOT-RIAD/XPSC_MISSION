#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

ll sum_of_digits(ll num) {
    ll sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, k;
        cin >> x >> k;

        while (sum_of_digits(x) % k != 0) {
            x++;
        }

        cout << x << endl;
    }

    return 0;
}