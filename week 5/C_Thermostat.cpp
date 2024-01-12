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
        ll l,r,x;cin>>l>>r>>x;
        ll a,b; cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(b-a)>=x)
        {
            cout<<1<<endl;
            continue;
        }
        if(a<b)
        {
            if(b+x<=r or a-x>=l)
            {
                cout<<2<<endl;
            }
            else if(a+x<=r and b-l>=x)
            {
                cout<<3<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            if(a+x<=r or b-x>=l)
            {
                cout<<2<<endl;
            }
            else if(a-x>=l and r-b>=x)
            {
                cout<<3<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }

        }
        
    }
    return 0;
}
