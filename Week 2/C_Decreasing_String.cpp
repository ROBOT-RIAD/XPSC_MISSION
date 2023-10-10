#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int 
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string s;
    int i=0;  
    while (t--) {
        string s1;
        cin >> s1;
        int n;
        cin >> n;
        sort(s1.begin(),s1.end());
        while(true)
        {
            if(s.empty())
            {
                s.push_back(s1[0]);
                break;
            }
            else if(s[s.size()-1]!=s1[i])
            {
                s.push_back(s1[i]);
                break;
            }
            // else
            // {
            //     s.push_back(s1[1]);
            //     break;
            // }
            i++;
        }
        i=0;
        
    }
    cout<<s; 
    return 0;
}