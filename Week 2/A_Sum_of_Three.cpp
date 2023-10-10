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
        ll n;
        cin >> n;
        vector<ll> v;
        bool flag = false;
        for (ll a = 1; a < n; a++)
        {
            for (ll b = 1; b < n; b++)
            {
                ll c=n-a-b;
                if (a + b + c == n&&a>=1&&b>=1&&c>=1)
                    {
                        if (a != b && a != c && b != c)
                        {
                            if (a % 3 != 0 && b % 3 != 0 && c % 3 != 0)
                            {
                                v.push_back(a);
                                v.push_back(b);
                                v.push_back(c);
                                flag = true;
                                break;
                            }
                        }
                    }
            }
            if (flag)
                break;
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (ll vv : v)
            {
                cout << vv << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        v.clear();
    }
    return 0;
}