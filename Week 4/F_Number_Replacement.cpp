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
        fo(i,0,n)
        {
            cin>>v[i];
        }       
        string s;
        cin>>s;
        map<int,set<char>>m;
        for(int i=0;i<n;i++)
        {
            m[v[i]].insert(s[i]);
        }
        bool flag=true;
        for(auto x:m)
        {
            if(x.second.size()>1)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        m.clear();
    }
    return 0;
}