#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        fo(i,0,n)cin>>v[i];
        vector<int>odd,even;
        fo(i,0,n)
        {
            if(v[i]%2==0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        bool e=true,o=true;
        //cheak even
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)continue;
            if(odd.empty() || odd[0]>=v[i])
            {
                e=false;
                break;
            }
        }
        //cheak odd
        for(int i=0;i<n;i++)
        {
            if(v[i]%2!=0)continue;
            if(odd.empty() ||odd[0]>=v[i])
            {
                o=false;
                break;
            }
        }

        if(e ||o)
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