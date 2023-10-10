#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
      string s;cin>>s;
      int n;cin>>n;
      ll h=(s[0]-'0')*10+(s[1]-'0');
      ll m=(s[3]-'0')*10+(s[4]-'0');
      ll p=h,q=m;
      int count=0;
      while(true)
      {
        m+=n;
        h+=(m/60);
        m%=60;
        h%=24;

        int a,b,c,d;
        a=h%10;
        b=(h/10)%10;
        c=m%10;
        d=(m/10)%10;

        if(a==d && b==c)
        {
            count++;
        }
        if(h==p &&m ==q)
        {
            break;
        }
      }
      cout<<count<<endl;
    }
    return 0;
}