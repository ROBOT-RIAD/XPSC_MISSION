#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int i = 0;
        ll sum = 0;
        int step = 0, neg = 0;
        while (i < n)
        {
            sum += abs(v[i]);
            if (v[i] < 0)
            {
                if (neg == 0)
                {
                    neg = 1;
                    step++;
                }
            }
            else if (v[i] > 0)
            {
                neg = 0;
            }
            i++;
        }
        cout << sum << " " << step << endl;
    }
    return 0;
}