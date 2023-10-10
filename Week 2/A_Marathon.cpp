#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n=4;
        vector<int>v(n);
        int count=0;
        fo(i,0,n)
        {
            cin>>v[i];
            if(v[0]<v[i])
            {
                count++;
            }
        }
        cout<<count<<endl;      
    }
    return 0;
}