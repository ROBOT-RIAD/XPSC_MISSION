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
        char ch;
        cin >> ch;
        cin.ignore();
        string s;
        cin >> s;
        string s1 = s + s;
        string s2;
        int i = 0, j = 0;
        int mx = 0;
        int count = 0;
        while (i < s1.size())
        {
            s2 += s1[i];
            if(s2[0]!=ch)
            {
                s2.clear();
            }
            if (s1[i] == 'g')
            {
                if(s2[0]==ch)
                {
                    int l=s2.size()-1;
                    mx=max(mx,l);
                }
                s2.clear();
            }
            i++;
        }
        cout<<mx<<endl;
    }
    return 0;
}