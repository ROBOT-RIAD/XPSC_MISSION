#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int mx=INT_MIN;
        int mn=INT_MAX;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>=mx)
            {
                mx=v[i];
            }
            if(v[i]<=mn)
            {
                mn=v[i];
            }
        }
        cout<<mn<<" "<<mx<<endl; 
        int ans=mx-mn;
        cout<<ans<<endl;       
    }
    return 0;
}