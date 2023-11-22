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
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        vector<int>v1(n);
        for(int i=0;i<n;i++)cin>>v1[i];

        sort(v1.begin(),v1.end());

        vector<int>ans(n);

        for(int i=0;i<n;i++)
        {
            ans[v[i].second]=v1[i];
        }

        for(auto ss:ans)
        {
            cout<<ss<<" ";
        }
       cout<<endl;
    }
    return 0;
}