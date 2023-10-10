#include <bits/stdc++.h>
#define fo(i, s, n) for (int i = s; i < n; i++)
#define ffo(i, s, n) for (int i = s; i <= n; i++)
#define ll long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    string s1 = "YES";
    while (n--) {
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        if(s==s1)
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
