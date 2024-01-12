#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        int swipesLeft = 0;
        bool valid = true;

        if(s[0]=='0')
        {
            valid=false;
        }
        else
        {
            for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                swipesLeft--;
            } else {
                swipesLeft = x;
            }

            if (swipesLeft < 0) {
                valid = false;
                break;
            }
        }
        }

        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}
