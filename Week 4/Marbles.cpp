#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int remainder = max(a, b) % min(a, b);
        int result = (remainder == 0) ? 0 : min(a, b) - remainder;
        if(b>a)
        {
           result = (remainder == 0) ? 0 : b - remainder; 
        }

        cout << result << endl;
    }

    return 0;
}
