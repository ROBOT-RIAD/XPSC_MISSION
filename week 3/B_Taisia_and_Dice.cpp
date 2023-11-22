#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        ll n,s,r;cin>>n>>s>>r;
        cout<<s-r<<" ";
        if(r%(n-1)==0)
        {
            for(ll i=0;i<n-1;i++)
            {
                cout<<r/(n-1)<<" ";
            }
        }
        else
        {
            ll tmp=r%(n-1);
            for(ll i=0;i<n-1-tmp;i++)
            {
                cout<<r/(n-1)<<" ";
            }
            for(ll i=0;i<tmp;i++)
            {
                cout<<r/(n-1)+1<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}