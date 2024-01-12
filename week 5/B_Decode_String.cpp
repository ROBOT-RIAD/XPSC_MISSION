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
        int n;cin>>n;
        string s;cin>>s;

        string ans="";
        for(int i=0;i<n;i++)
        {
            if(i+2<n and s[i+2]=='0' and (i+3>=n or s[i+3]!='0'))
            {
                int num=((s[i]-'0')*10)+(s[i+1]-'0');
                ans.push_back(char(num+96));
                i+=2;
            }
            else
            {
                int num=(s[i]-'0');
                ans.push_back(char(num+96));
            }
        }
        cout<<ans<<endl;       
    }
    return 0;
}
