#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, q;
        cin >> n >> p >> q;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long result = 0;
        for (int i = 0; i <= min(p, q); i++)
        {
            long long max_val = a[n - 1];
            long long min_val = a[0];
            result = max(result, max_val - min_val);
            if (i < p)
            {
                long long x = a[0];
                long long y = a[1];
                a.erase(a.begin(), a.begin() + 2);
                a.insert(lower_bound(a.begin(), a.end(), x + y), x + y);
            }
            else
            {
                long long x = a[n - 2];
                long long y = a[n - 1];
                a.pop_back();
                a.pop_back();
                a.push_back(x - y);
            }
        }

        cout << result << endl;
    }
    return 0;
}
