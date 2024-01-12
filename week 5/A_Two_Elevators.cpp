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
        int a,b,c;cin>>a>>b>>c;

        int ans1=abs(a-1);
        int ans2=abs(b-c)+abs(c-1);

        if(ans1==ans2)
        {
            cout<<3<<endl;
        }
        else if(ans1<ans2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        
    }
    return 0;
}
