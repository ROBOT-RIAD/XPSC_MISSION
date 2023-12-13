#include <bits/stdc++.h>
using namespace std;

pair<int, int> findSolutions(int N) {
    int x = 0;
    int y = N;
    
    while ((x | y) * (x ^ y) != N) {
        x++;
        y--;
    }
    
    return make_pair(x, y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        pair<int, int> result = findSolutions(N);
        cout << result.first << " " << result.second << "\n";
    }
    
    return 0;
}
