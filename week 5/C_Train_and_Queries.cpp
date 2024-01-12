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
        ll n,q;cin>>n>>q;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        map<ll,vector<ll>> m;
        for(ll i=0;i<n;i++)
        {
            m[v[i]].push_back(i);
        }
        while(q--)
        {
            ll a,b;cin>>a>>b;
            if(m[a].empty() || m[b].empty())
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            if(m[a].front()<m[b].back())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }          
        }       
    }
    return 0;
}
