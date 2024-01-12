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
        int n,h,m;cin>>n>>h>>m;
        int ans =INT_MAX;
        for(int i=0;i<n;i++)
        {
            int hh,mm;cin>>hh>>mm;
            int cnt=0;
            int hu=h;
            int mi=m;

            while(true){
                if(hu==hh && mi ==mm)
                {
                    break;
                }
                cnt++;
                mi++;
                if(mi==60)
                {
                    mi=0;
                    hu++;
                    if(hu==24)
                    {
                        hu=0;
                    }
                }
                
            }
            ans=min(ans,cnt);
        }
         cout<<ans/60<<" "<<ans%60<<endl;
        
    }
    return 0;
}
