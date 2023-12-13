#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=stoi(s);
        int a=s.size();
        int b=1;
        for(int i=0;i<a-1;i++)
        {
            b*=10;
        }
        cout<<n-b<<endl;       
    }
    return 0;
}