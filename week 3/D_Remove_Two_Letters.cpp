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
        string s1="";
        ffo(i,2,n)
        {
            s1.push_back(s[i]);
        }
        int i=0,j=0;
        int ans=1;
        while(i<n-2)
        {
            if(s[i]!=s1[j])
            {
                ans++;
            }
            i++;
            j++;
        }
        cout<<ans<<endl;       
    }
    return 0;
}