#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,b,g;cin>>n>>b>>g;
        int gl=n-b;
        int bg=b%g;
        int glg=gl%g;

        int mx=max(bg,glg);
        int mn=min(bg,glg);

        if(bg==0||glg==0)
        {
            cout<<mx<<endl;
        }
        else
        {
            int ans=mx-mn;
            cout<<ans<<endl;
        }        
    }
    return 0;
}