#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    map<int ,int >m;
    fo(i,0,n)
    {
        int x;cin>>x;
        m[x]++;
    }
    for(auto it:m)
    {
        if(it.second==1)
        {
            cout<<it.first;
        }
    }
    return 0;
}