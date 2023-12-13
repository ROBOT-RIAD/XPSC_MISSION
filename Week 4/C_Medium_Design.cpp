#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> segments;

        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            segments.push_back({l, r});
        }

        sort(segments.begin(), segments.end());

        vector<long long> changes(m + 2, 0);

        for (int i = 0; i < n; i++) {
            int l = segments[i].first;
            int r = segments[i].second;
            changes[l] += 1;
            changes[r + 1] -= 1;
        }

        long long max_cost = 0;
        long long current = 0;

        for (int i = 1; i <= m; i++) {
            current += changes[i];
            max_cost = max(max_cost, current);
        }

        cout << max_cost << endl;
    }

    return 0;
}
