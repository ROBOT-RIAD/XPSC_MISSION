#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         vector<ll> v(n);
//         fo(i, 0, n) cin >> v[i];
//         while (q--)
//         {
//             ll op, x;
//             cin >> op >> x;
//             if (op == 0)
//             {
//                 fo(j, 0, n)
//                 {
//                     if (v[j] % 2 == 0)
//                     {
//                         v[j] += x;
//                     }
//                 }
//             }
//             else
//             {
//                 fo(j, 0, n)
//                 {
//                     if (v[j] % 2 == 1)
//                     {
//                         v[j] += x;
//                     }
//                 }
//             }
//             ll sum = 0;
//             for (auto ss : v)
//             {
//                 sum += ss;
//             }
//             cout << sum << endl;
//         }
//     }
//     return 0;
// }

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,q;cin>>n>>q;
        vector<ll>v(n);
        ll sum=0,odd=0,even=0;     
        fo(i,0,n)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            sum+=v[i];
        }
        while(q--)
        {
            ll op,x;cin>>op>>x;
            if(op==0)
            {
                sum+=(even*x);
                if(x%2==1)
                {
                    odd+=even;
                    even=0;
                }
            }
            else
            {
                sum+=(odd*x);
                if(x%2==1)
                {
                    even+=odd;
                    odd=0;
                }
            }
            cout<<sum<<endl;
        }

    }
}