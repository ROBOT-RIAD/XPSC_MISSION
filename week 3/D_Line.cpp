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
        string s;
        cin >> s;
        vector<ll> not_changevalu;
        ll total = 0;
        int change_count = 0;
        for (int i = 0; i < n; i++)
        {
            int l = i;
            int r = n - i - 1;
            if (s[i] == 'L')
            {
                if (r > l)
                {
                    change_count++;
                    total += r;
                    not_changevalu.push_back(r - l);
                }
                else
                {
                    total += l;
                }
            }
            else
            {
                if (l > r)
                {
                    change_count++;
                    total += l;
                    not_changevalu.push_back(l - r);
                }
                else
                {
                    total += r;
                }
            }
        }
        vector<ll> ans(n + 1);
        for (int i = change_count; i <= n; i++)
        {
            ans[i] = total;
        }
        sort(not_changevalu.begin(), not_changevalu.end(), greater<ll>());
        for (int i = change_count - 1; i >= 1; i--)
        {
            total -= not_changevalu.back();
            not_changevalu.pop_back();
            ans[i] = total;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}