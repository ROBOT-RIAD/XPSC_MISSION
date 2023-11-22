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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int i = 0,j=0;
        int sum = 0;
        while (j < n - 1)
        {
            if(v[j+1]-v[j]==1)
            {
                sum+=v[j];
                if(v[j+2]-v[j+1]!=1)
                {
                    sum+=v[j+1];
                    j=j+2;
                    
                }
            }
            j++;           
        }
        if(v[n-1]-v[n-2]==1)
        {
            sum+=v[n-1];
        }
        if (sum == 0)
        {
            cout << v[n - 1] << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}
