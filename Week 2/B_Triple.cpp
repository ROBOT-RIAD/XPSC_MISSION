// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include<string>
// #include <iostream>
// #include <algorithm>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;cin>>n;
//         vector<int>v(n);
//         map<int ,int>m;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//             m[v[i]]++;
//         }
//         if(n<3)
//         {
//             cout<<-1<<"\n";
//         }
//         else
//         {
//             int k=-1;
//             for(auto cc:m)
//             {
//                 if(cc.second>=3)
//                 {
//                     if(cc.first>k)
//                     {
//                         k=cc.first;
//                     }
//                 }
//             }
//             cout<<k<<endl;
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
        vector<int >v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int mx=-1;
        int i=0;
        while(i<n)
        {
            if(v[i]==v[i+1]&&v[i+1]==v[i+2])
            {
                mx=max(mx,v[i]);
                i+=2;
            }
            i++;
        }
        cout<<mx<<endl;
    }
    return 0;
}