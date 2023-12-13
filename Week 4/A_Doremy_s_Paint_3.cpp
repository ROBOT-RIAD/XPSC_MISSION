
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
        vector<ll> v(n);
        fo(i, 0, n) cin >> v[i];
        sort(v.begin(), v.end());
        if (n < 3)
        {
            cout << "Yes" << endl;
        }
        else
        {
            bool flag = false;
            do
            {
                for (int j = 0; j < v.size() - 1; j++)
                {
                    ll k = v[j] + v[j+ 1];
                    if (k == v[0] + v[1])
                    {
                        flag = true;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
            } while (next_permutation(v.begin(), v.end()));

            if (flag)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
