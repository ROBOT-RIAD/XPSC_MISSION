#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll sum=0;
        while(n>0)
        {
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;      
    }
    return 0;
}