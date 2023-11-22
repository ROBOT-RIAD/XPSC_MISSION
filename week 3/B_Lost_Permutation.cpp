#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int m,s;cin>>m>>s;
        vector<int>v(m);
        for(int i=0;i<m;i++)
        {
            cin>>v[i];
        }
        vector<bool>tak(1005,false);
        for(int i=0;i<m;i++)tak[v[i]]=true;
        int mx=*max_element(v.begin(),v.end());
        int sum=0;
        bool flag=0;
        int curr=1;
        while(true)
        {
            if(tak[curr])
            {
                curr++;
                continue;
            }
            sum+=curr;
            tak[curr]=true;
            if(sum==s)
            {
                bool temp=false;
                for(int i=curr;i<=mx;i++)
                {
                    if(!tak[i])
                    {
                        temp=true;
                        break;
                    }
                }
                if(!temp)
                {
                    flag=true;
                }
                break;
            }
            curr++;
            if(sum>s)break;
        }
        if(flag)
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