#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

int countSubarrays(vector<int> v, int n, int k)
{
    int oddCount = 0;

    for (int i = 0; i <= n - k; i++)
    {
        int bit = 0;
        for (int j = i; j < i + k; j++)
        {
            bit |= v[j];
        }
        if (bit % 2 != 0)
        {
            oddCount++;
        }
    }

    return oddCount;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int result = countSubarrays(v, n, k);
        cout << result << endl;
    }

    return 0;
}
