#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int s; cin>>s;
        vector<int>v;
        for(int i=9;i>=1;i--)
        {
            if(s==0)break;
            if(s<i)
            {
                v.push_back(s);
                break;
            }
            else
            {
                v.push_back(i);
                s-=i;
            }
        }
        for(int i=v.size()-1;i>=0;i--)
        {
           cout<<v[i];
        }
        cout<<endl;       
    }
    return 0;
}