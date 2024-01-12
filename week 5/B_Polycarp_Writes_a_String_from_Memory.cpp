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
        set<char>s1;
        ll ans=0;
        for(int i=0;i<s.size();i++)
        {
            s1.insert(s[i]);
            if(s1.size()>3)
            {
                ans++;
                s1.clear();
                s1.insert(s[i]);
            }
        }
        if(!s1.empty())
        {
            ans++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
