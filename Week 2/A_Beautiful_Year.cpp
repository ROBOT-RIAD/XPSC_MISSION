#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    int a,b,c,d;
    int ans;
    while(true)
    {
        n++;
        ans=n;
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        n=n/10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<ans;
            break;
        }
        n=ans;
    }
    return 0;
}