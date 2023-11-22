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
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll sum = a[i][j];
                for (int k = 1; i - k >= 0 && j - k >= 0; k++)
                {
                    sum += a[i - k][j - k];
                }
                for (int k = 1; i - k >= 0 && j + k < m; k++)
                {
                    sum += a[i - k][j + k];
                }
                for (int k = 1; i + k < n && j - k >= 0; k++)
                {
                    sum += a[i + k][j - k];
                }
                for (int k = 1; i + k < n && j + k < m; k++)
                {
                    sum += a[i + k][j + k];
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
