// #include<bits/stdc++.h>
// #define fo(i,s,n) for(int i=s;i<n;i++)
// #define ffo(i,s,n) for(int i=s;i<=n;i++)
// #define ll long long int 
// using namespace std;

// int main() {
//     int t;cin>>t;
//     while(t--)
//     {
//         ll n;cin>>n;
//         map<string,ll>m;
//         map<char,ll>m1;
//         map<char,ll>m2;
//         vector<string>v(n);

//         for(ll i=0;i<n;i++)
//         {
//             cin>>v[i];
//             m1[v[i][0]]++;
//             m2[v[i][1]]++;
//             m[v[i]]++;
//         }

//         ll ans=0;
//         for(ll i=0;i<n;i++)
//         {
//            ll x=max(0,m1[v[i][0]]-m[v[i]]);
//            ans+=x;
//            x=max(0,m2[v[i][1]]-m[v[i]]);
//            ans+=x;
//            if(m1[v[i][0]]>=0)m1[v[i][0]]--;
//            if(m2[v[i][1]]>=0)m2[v[i][1]]--;
//            if(m[v[i]]>=0)m[v[i]]--;
//         }
//         cout<<ans<<endl;       
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<vector<int>> cnt(12, vector<int>(12, 0));
        long long ans = 0;
        
        for(int i = 0;i < n; ++i) {
            string s; cin >> s;
            for(int j = 0;j < 2; ++j) {
                for(char c = 'a'; c <= 'k'; ++c) {
                    if(c == s[j]) continue;
                    string a = s; a[j] = c;
                    ans += cnt[a[0] - 'a'][a[1] - 'a'];
                }
            }
            cnt[s[0] - 'a'][s[1] - 'a']++;
        }
        cout << ans << "\n";
    }
}