#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        if (n % m != 0) {
            cout << -1 << endl; // It's impossible to divide equally
        } else {
            long long operations = 0;
            while (n > 1 && n % 2 == 0) {
                n /= 2;
                operations++;
            }
            if (n == 1) {
                cout << operations << endl;
            } else {
                cout << -1 << endl; // It's impossible to divide equally
            }
        }
    }
    
    return 0;
}
