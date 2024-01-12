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
        ll n;cin>>n;
        ll x,y,z;
        for(int i=0;i<n;i++)
        {
            y=i;
            ll rem=n-y;
            if(rem%2==0)
            {
                x=1+(rem/2);
            }
            else
            {
                x=(rem+1)/2;
            }
            z=n-y-x;
            if(x>0 && y>0 && z>>0 &&x<y &&x>z)
            {
                break;
            }
        }
        cout<<x<<" "<<y<<" "<<z<<endl;       
    }
    return 0;
}

