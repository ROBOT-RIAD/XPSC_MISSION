#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;
int cost(string& a,string& b,int m)
{
    int val=0;
    for(int i=0;i<m;i++)
    {
        val+=abs(a[i]-b[i]);
    }
    return val;
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<string>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans=min(ans,cost(s[i],s[j],m));
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}