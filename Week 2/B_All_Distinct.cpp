// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <string>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         sort(v.begin(), v.end());
//         auto ip = unique(v.begin(), v.end());
//         v.resize(distance(v.begin(), ip));
//         int k = v.size();
//         int d = n - k;
//         if (d % 2 == 0) {
//             cout << k << endl;
//         } else {
//             cout << k - 1 << endl;
//         }
//     }
//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            s.insert(x);
        }
        int k=s.size();
        int d=n-k;
        if(d%2==0)
        {
            cout<<k<<endl;
        }
        else
        {
            cout<<k-1<<endl;
        }

    }
    return 0;
}
