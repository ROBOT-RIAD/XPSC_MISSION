#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n,k;cin>>n>>k;
    int ans =0;
    while(n>0)
    {
       n/=k;
       ans++;
    }
    cout<<ans;
    return 0;
}