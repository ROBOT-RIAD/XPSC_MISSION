#include <bits/stdc++.h>
#define forn(i,s, n) for (i = 0; i < n; i++)
using namespace std;
int main() {
    string s= "Timur";
    sort(s.begin(), s.end());
    int n;
    cin >> n;
    int i;
    forn(i,0, n) {
        int m;
        cin >> m;
        string s1;
        cin >> s1;
        sort(s1.begin(), s1.end());
        cout << (s1 == s ? "YES" : "NO") << endl;
    }
}




















// #include <bits/stdc++.h>
// #define fo(i, s, n) for (i = s; i < n; i++)
// #define ffo(i, s, n) for (i = s; i <= n; i++)
// #define ll long long int
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         cin.ignore();
//         string s;
//         cin >> s;
//         int i = 0, j = 0;
//         string s1 = "Trumi";
//         string s2;
//         int k = s1.size();
//         bool flag = false;
//         int ans = 0;
//         while (j < n) {
//             s2.push_back(s[j]);
//             if (s2.size() >= k) {
//                 cout<<s2<< " ";
//                 if (s2 == "Timur" || s2 == "miurT" || s2 == "Trumi" || s2 == "mriTu") {
//                     flag = true;
//                     ans++;
//                 }
//                 s2.erase(0, 1);
//             }
//             j++;
//         }
//         if (flag && ans == 1) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// #define fo(i,s,n) for(i=s;i<n;i++)
// #define ffo(i,s,n) for(i=s;i<=n;i++)
// #define ll long long int 
// using namespace std;
 
// int main() {
//     int t;cin>>t;
//     while(t--)
//     {
//       int n;cin>>n;
//       cin.ignore();
//       string s;cin>>s;
//       string s1="Timur";
//       map<char,int>m;
//       for(char ss:s1)
//       {
//          m[ss]++;
//       }
//       int i=0,j=0;
//       int count=m.size();
//       bool flag=false;
//       int ans=0;
//       while(j<n)
//       {
//         if(m.find(s[j])!=m.end())
//         {
//             m[s[j]]--;
//             if(m[s[j]]==0)
//             {
//                 count--;
//             }
//         }
//         if(j>=s1.size()-1)
//         {
//             if(count==0)
//             {
//                 flag=true;
//                 ans++;
//             }
//             if(m.find(s[i])!=m.end())
//             {
//                 m[s[i]]++;
//                 if(m[s[i]]==1)
//                 {
//                     count++;
//                 }
//             }
//             i++;
//         }
//         j++;      
//       } 
//       if(flag&&ans==1)
//       {
//         cout<<"YES"<<endl;
//       }
//       else
//       {
//         cout<<"NO"<<endl;
//       }
//     }
//     return 0;
// }
