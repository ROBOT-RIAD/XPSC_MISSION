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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        set<int>s;
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            s.insert(v[i]);
            count++;
            if(count>s.size())
            {
                break;
            }
        }
        cout<<n-s.size()<<endl;       
    }
    return 0;
}
