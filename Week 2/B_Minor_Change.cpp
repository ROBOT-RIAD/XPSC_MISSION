#include<bits/stdc++.h>
#define fo(i,s,n) for(i=s;i<n;i++)
#define ffo(i,s,n) for(i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    int i=0,j=0;
    int count=0;
    while(i<s.size())
    {
        if(s[i]!=s1[j])
        {
            count++;
        }
        i++;
        j++;
    }
    cout<<count<<endl;
    return 0;
}