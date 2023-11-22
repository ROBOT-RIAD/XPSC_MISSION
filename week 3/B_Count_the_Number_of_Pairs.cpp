#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        ll ans=0;
        map<char,int>fr;
        for(auto ch:s)
        {
            fr[ch]++;
        }
        for(char i='a';i<='z';i++)
        {
            int mn=min(fr[i],fr[i-32]);
            ans+=mn;
            fr[i]-=mn;
            fr[i-32]-=mn;
        }
        for(char i='a';i<='z';i++)
        {
            int mx=max(fr[i],fr[i-32]);
            int mn=min(k,mx/2);
            ans+=mn;
            k-=mn;          
        }
        cout<<ans<<endl;       
    }
    return 0;
}