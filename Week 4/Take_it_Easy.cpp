#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

bool candi(vector<int> &v, int n)
{
    int total = 0;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        total += v[i];
        mn = min(mn, v[i]);
    }
    if (total % n != 0)
    {
        return false;
    }
    int t = total / n;
    for (int i = 0; i < n; i++)
    {
        if ((t - v[i]) % 2 != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        fo(i, 0, n) cin >> v[i];

        bool ans=candi(v,n);
        if(ans)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}