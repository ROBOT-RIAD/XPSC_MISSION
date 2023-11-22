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
        vector<vector<int>> pre(n, vector<int>(n - 1));
        vector<int> p(n, 0);
        vector<int> count(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            p[i] = i + 1;
            for (int j = 0; j < n - 1; j++)
            {
                cin >> pre[i][j];
                if (j == 0)
                    count[pre[i][j]]++;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (count[i] == n - 1)
            {
                p[0] = i;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (pre[i][0] != p[0])
            {
                for (int j = 0; j < n - 1; j++)
                {
                    p[j + 1] = pre[i][j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    return 0;
}