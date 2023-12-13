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
        if (s.size() <= 2)
        {
            int count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '.')
                {
                    count++;
                }
            }
            cout << count << endl;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if ((i <= n - 3) && (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.'))
                {
                    count = 2;
                    break;
                }
                if (s[i] == '.')
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
