#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int i;
    fo(i, 0, n) cin >> v[i];
    v.erase(remove(v.begin(), v.end(), x), v.end());
    if (v.empty())
    {
        cout << " " << endl;
    }
    else
    {
        for (int cc : v)
        {
            cout << cc << " ";
        }
        cout << endl;
    }
    return 0;
}
