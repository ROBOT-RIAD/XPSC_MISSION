#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int
using namespace std;

bool is_prime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int i;

    ffo(i, 1, n) {
        int prime_div = 0;
        for(int j = 2; j <= i; j++) {
            if(i % j == 0 && is_prime(j)) {
                prime_div++;
                if(prime_div > 2) {
                    break;
                }
            }
        }
        if(prime_div == 2) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
