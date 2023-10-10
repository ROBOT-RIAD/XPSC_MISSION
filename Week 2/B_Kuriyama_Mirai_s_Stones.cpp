#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    ll n;cin>>n;
    vector<ll>v(n);
    vector<ll>v2;
    ll i, sum=0;;
    fo(i,0,n)
    {
       cin>>v[i];
       sum+=v[i];
       v2.push_back(sum);
    }
    vector<ll>v3;
    v3=v;
    vector<ll>v4;
    sort(v3.begin(),v3.end());
    i=0,sum=0;
    fo(i,0,n)
    {
       sum+=v3[i];
       v4.push_back(sum);
    }
    
    ll q;cin>>q;
    while(q--)
    {
        ll op,l,r;cin>>op>>l>>r;
        if(op==1)
        {
            if(l-1==0)
            {
                cout<<v2[r-1]<<endl;
            }else
            {
                cout<<v2[r-1]-v2[l-2]<<endl;
            }
        }
        else
        {
            if(l-1==0)
            {
                cout<<v4[r-1]<<endl;
            }else
            {
                cout<<v4[r-1]-v4[l-2]<<endl;
            }

        }
    }
    return 0;
}