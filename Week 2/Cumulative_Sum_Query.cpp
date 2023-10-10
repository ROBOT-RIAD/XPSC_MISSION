#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v(n);
    int i,j;
    fo(i,0,n)cin>>v[i];
    int x;cin>>x;
    while(x--)
    {
      int l,r;cin>>l>>r;
      if(l==r)
      {
        cout<<v[l]<<endl;
      }
      else
      {
        int sum=0;
        for(int i=l;i<=r;i++)
        {
          sum+=v[i];
        }
        cout<<sum<<endl;
      }
    }
    return 0;
}