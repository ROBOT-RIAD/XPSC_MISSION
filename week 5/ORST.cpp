#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    ROBOT_RIAD;
    int t; cin >> t;
    while(t--)
    {
        ll n,m;cin>>n>>m;
        vector<ll>v1(n),v2(m);
        for(ll i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        ll mx=LLONG_MIN;
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
            mx=max(mx,v2[i]);
        }
        ll s=n-mx;
        sort(v1.begin()+s,v1.end());
        for(int i=0;i<n;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;        
    }
    return 0;
}
