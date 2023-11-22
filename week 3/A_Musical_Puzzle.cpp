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
        set<string>s1;
        for(int i=0;i<n-1;i++)
        {
            string s3="";
            s3+=s[i];
            s3+=s[i+1];
            s1.insert(s3);
        }
        cout<<s1.size()<<endl;
        
    }
    return 0;
}