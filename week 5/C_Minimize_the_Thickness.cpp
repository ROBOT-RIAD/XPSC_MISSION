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
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int ans=n;
        ll segmentsum=0;
        for(int i=0;i<n;i++)
        {
            segmentsum+=v[i];
            ll sum=0;
            int len=0,mxlen=i+1;
            bool flag=false;
            for(int j=i+1;j<n;j++)
            {
                if(sum+v[j]>segmentsum)
                {
                    break;
                }
                if(j==n-1 and sum+v[j]==segmentsum)
                {
                    mxlen=max(mxlen,len+1);
                    flag=true;
                    break;
                }
                sum+=v[j];
                len++;
                if(sum==segmentsum)
                {
                    mxlen=max(mxlen,len);
                    len=0;
                    sum=0;
                }
            }
            if(flag)
            {
                ans=min(ans,mxlen);
            }
        }
        cout<<ans<<endl;       
    }
    return 0;
}
