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
        string s;cin>>s;
        ll n=stoi(s);
        ll a=s.size();
        ll b=1;
        for(ll i=0;i<a-1;i++)
        {
            b*=10;
        }
        cout<<n-b<<endl;       
    }
    return 0;
}
