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
        string s2;
        cin >> s2;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s2[i])
            {
                continue;
            }
            else if (s[i] == 'R' && s2[i] == 'S' || s[i] == 'S' && s2[i] == 'R')
            {
                if (s[i] == 'R')
                {
                    ans1++;
                }
                else
                {
                    ans2++;
                }
            }
            else if (s[i] == 'S' && s2[i] == 'P' || s[i] == 'P' && s2[i] == 'S')
            {
                if (s[i] == 'S')
                {
                    ans1++;
                }
                else
                {
                    ans2++;
                }
            }
            else if (s[i] == 'P' && s2[i] == 'R' || s[i] == 'R' && s2[i] == 'P')
            {
                if (s[i] == 'P')
                {
                    ans1++;
                }
                else
                {
                    ans2++;
                }
            }
        }
        if (ans1 > ans2)
        {
            cout << 0 << endl;
        }
        else if (ans1 == ans2)
        {
            cout << 1 << endl;
        }
        else if (ans2 > ans1)
        {
            int f=0;
            while (1)
            {
                if (ans1 > ans2)
                {
                    cout<<f<<endl;
                    break;
                }
                ans1++;
                ans2--;
                f++;
            }
        }
    }
    return 0;
}