#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int ar[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>ar[i][j];
            }
        }
        int a,b,c,d;
        a=ar[0][0];
        b=ar[0][1];
        c=ar[1][0];
        d=ar[1][1];
        if(a<b&&c<d&&a<c&&b<d || c<a&&d<b&&c<d&&a<b ||d<c&&b<a&&d<b&&c<a || b<d&&a<c&&b<a&&d<c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}