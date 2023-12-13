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
        if(n==3)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(n==5)
        {
            cout<<"5 4 1 2 3"<<endl;
            continue;
        }

        vector<int>v(n+1);
        for(int i=1;i<=n;i++)
        {
            v[i]=(n-i+1);
        }
        if(n%2==1)
        {
            swap(v[n/2],v[(n/2)+1]);
        }
        for(int i=1;i<=n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;        
    }
    return 0;
}