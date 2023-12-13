#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        map<int,vector<int>>index;
        for(int i=0;i<n;i++)
        {
            index[v[i]].push_back(i);
        }

        while(q--)
        {
            int a,b;cin>>a>>b;
            if(index[a].empty() or index[b].empty())
            {
              cout<<"NO"<<endl;
              continue;
            }
            if(a==b)
            {
                cout<<"YES"<<endl;
                continue;
            }
            if(index[a].front()<index[b].back())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }

        
    }
    return 0;
}