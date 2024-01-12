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
        ll n;cin>>n;
        vector<ll>v;
        for(ll i=9;i>=1;i--)
        {
            if(n==0)break;
            if(n<i)
            {
               v.push_back(n);
               break;
            }
            else{
                v.push_back(i);
                n-=i;
            }
        }
        for(ll i=v.size()-1;i>=0;i--)
        {
            cout<<v[i];
        }
        cout<<endl;      
    }
    return 0;
}
