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
        string s[n];
        map<string ,bool>m;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            m[s[i]]=true;
        }
        for(int i=0;i<n;i++)
        {
            bool ans=0;
            for(int j=1;j<s[i].length();j++)
            {
                string s1,s2;
                s1=s[i].substr(0,j);
                s2=s[i].substr(j,s[i].length()-j);
                if(m[s1]&&m[s2])
                {
                    ans=true;
                }
            }
            cout<<ans;
        }
        cout<<"\n";
    }
    return 0;
}