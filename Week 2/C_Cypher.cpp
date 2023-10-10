#include <bits/stdc++.h>
#define fo(i, s, n) for (i = s; i < n; i++)
#define ffo(i, s, n) for (i = s; i <= n; i++)
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
        int i;
        fo(i, 0, n) cin >> v[i];
        for (int i = 0; i < n ; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for (auto aa : s)
            {
                if (aa == 'D')
                {
                    v[i]++;
                    if (v[i] == 10)
                        v[i] = 0;
                }
                else
                {
                    v[i]--;
                    if (v[i] == -1)
                        v[i] = 9;
                }
            }
        }
        for (int vv : v)
        {
            cout << vv << " ";
        }
        cout << endl;
    }
    return 0;
}