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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        int m = b.size();

        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        int i = n, j = m;
        string ans;
        while (i != 0 && j != 0)
        {
            if (a[i - 1] == b[j - 1])
            {
                ans += a[i - 1];
                i--;
                j--;
            }
            else
            {
                if (dp[i][j - 1] > dp[i - 1][j])
                {
                    j--;
                }
                else
                {
                    i--;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        int lps = ans.size();
        cout<<n-lps<<" "<<k<<endl;
        if(n-lps<=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        ans.clear();
    }
    return 0;
}