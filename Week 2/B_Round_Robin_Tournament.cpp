#include <bits/stdc++.h>
#define fo(i, s, n) for(i = s; i < n; i++)
#define ffo(i, s, n) for(i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main() {
    int n;
    cin >> n;

    char s[n][n];
    vector<int>v;
    int i, j;
    fo(i, 0, n) {
        int count=0;
        fo(j, 0, n) {
            cin >> s[i][j]; 
            if(s[i][j]=='o')
            {
               count++; 
            }
        }
        v.push_back(count);
    }
    vector<int >v2;
    vector<int >v3;
    fo(i,0,n)cin>>v[i];
    v2=v;
    sort(v2.begin(),v2.end(),greater<int>());
    i=0;
    while(i<n)
    {
        int d=v2[i];

        for(int j=0;j<n;j++)
        {
            if(d==v[j])
            {
              v3.push_back(j);
              v[j]=-1;
              break;
            }
        }
        i++;
    }
    for(int ss:v3)
    {
        cout<<ss+1<<" ";
    }
    
    return 0;
}
