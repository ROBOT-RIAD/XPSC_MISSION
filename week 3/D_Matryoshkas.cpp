#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

// int main() {
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;cin>>n;
//         vector<int>v(n);
//         map<int,int>count;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//             count[v[i]]++;
//         }
//         sort(v.begin(),v.end());
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             int val=v[i];
//             if(count[val]!=0)
//             {
//                ans++;
//                while(count[val]>0)
//                {
//                 count[val]--;
//                 val++;
//                }
//             }
//         }
//         cout<<ans<<endl;
        
//     }
//     return 0;
// }

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        map<int,int>count;
        set<int>b;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            count[v[i]]++;
            b.insert(v[i]);
            b.insert(v[i]+1);
        }
        int last=0;
        int ans=0;
        for(auto ss:b)
        {
            int c=count[ss];
            ans+=max(0,c-last);
            last=c;
        }
        cout<<ans<<endl;
    }
}