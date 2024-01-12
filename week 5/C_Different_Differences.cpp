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
        int k ,n;cin>>k>>n;
        int j=1;
        int dif=1;
        vector<int>v;
        for(int i=1;i<=k;i++)
        {
            v.push_back(j);
            if(n-(j+dif)>=(k-(i+1)))
            {
                j+=dif;
                dif++;
            }
            else
            {
                j++;
            }
        } 
        for(auto ss:v)
        {
            cout<<ss<<" ";
        } 
        cout<<endl;   
    }
    return 0;
}
