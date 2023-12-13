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
        vector<int>v(n);
        fo(i,0,n)cin>>v[i];

        sort(v.begin(),v.end());
        int ans=0;
        int l=0,r=n-1;
        while(l<r)
        {
            ans+=(v[r]-v[l]);
            l++,r--;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}