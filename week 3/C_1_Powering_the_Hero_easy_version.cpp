#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll>v(n);
        fo(i,0,n)cin>>v[i];
        priority_queue<ll>q;
        ll ans=0;
        fo(i,0,n)
        {
            if(v[i]>0)q.push(v[i]);
            else
            {
                if(!q.empty())
                {
                    int a=q.top();
                    ans+=a;
                    q.pop();
                }
            }
        }
        cout<<ans<<endl;      
    }
    return 0;
}