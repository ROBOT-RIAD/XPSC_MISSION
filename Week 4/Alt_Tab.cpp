#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    map<string, int> m;
    string s1 = "";
    int x = s.size();
    for (int i = x - 1; i >= 0; i--)
    {
        string s2 = s[i];
        if (m.find(s2) != m.end())
            continue;
        else
        {
            s1 += s2[s2.size() - 2];
            s1 += s2[s2.size() - 1];
            m[s2]++;
        }
    }
    cout << s1 << endl;
    return 0;
}