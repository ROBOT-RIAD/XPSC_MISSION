#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll N, X, D;
        cin >> N >> X >> D;

        ll total = X * 5;
        if (N == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll days = N / total;
            if (days < D)
            {
                cout << days + D << endl;
            }
            else if (D == 0)
            {
                cout << days << endl;
            }
            else
            {
                cout << D << endl;
            }
        }
    }

    return 0;
}