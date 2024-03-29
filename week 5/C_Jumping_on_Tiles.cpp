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
        int n; n=s.size();

        char mn=min(s[0],s[n-1]);
        char mx=max(s[0],s[n-1]);

        vector<pair<char,int>>v;

        for(int i=0;i<n;i++)
        {
            if(s[i]>=mn and s[i]<=mx)
            {
                v.push_back({s[i],i+1});
            }
        }

        sort(v.begin(),v.end(),[&](pair<char,int>a,pair<char,int>b){ return a.second<b.second;});

        if(v.size()>2)
        {
            sort(v.begin()+1,v.begin()+v.size()-1,[&](pair<char,int>a,pair<char,int>b){if (s[0]>s[n-1]){return a.first>b.first;} return a.first<b.first;});
        }

        vector<int > seq;
        ll move=0;
        seq.push_back(1);

        for(int i=1;i<v.size();i++)
        {
            move+=abs(v[i-1].first-v[i].first);
            seq.push_back(v[i].second);
        }

        cout<<move<<" "<<seq.size()<<endl;
        for(auto ss:seq)
        {
            cout<<ss<<" ";
        }
        cout<<endl;       
    }
    return 0;
}
