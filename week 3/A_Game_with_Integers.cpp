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
        bool flag = false;

        for (int i = 1; i <= 10; i++)
        {
            
            if (i % 2 != 0)
            {
                n = n + 1;
            }
            else
            {
                n = n + 1;
                if (n % 3 == 0)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}
