#include <bits/stdc++.h>
#define fo(i, s, n) for (i = s; i < n; i++)
#define ffo(i, s, n) for (i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int i;
    fo(i, 0, n) cin >> v[i];
    int max = 0;
    int ans = -1;
    for (int i = 2; i <= 1000; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] % i == 0)
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}