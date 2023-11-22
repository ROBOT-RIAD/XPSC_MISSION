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
        string s;cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string s1="";
        s1+=s[0];
        ffo(i,1,n-1)
        {
            if(s[i]!=s[i-1])
            {
                s1+=s[i];
            }
        }
        if(s1=="meow")
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