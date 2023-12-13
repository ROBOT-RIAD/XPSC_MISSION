#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        string s1;cin>>s1;
        string s2;cin>>s2;

        char chs1=s1.back();
        char chs2=s2.back();

        if(chs1==chs2)
        {
            if(s1.size()==s2.size())
            {
                cout<<"=";
            }
            else if(chs1=='S')
            {
                cout<<(s1.size()<s2.size()?'>':'<');
            }
            else
            {
                cout<<(s1.size()<s2.size()?'<':'>');
            }
        }
        else{
            cout<<(chs1<chs2?'>':'<');
        }
        cout<<endl;       
    }
    return 0;
}