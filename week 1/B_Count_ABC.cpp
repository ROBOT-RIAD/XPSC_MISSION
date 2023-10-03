#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int n;cin>>n;
//     cin.ignore();
//     string s;
//     cin>>s;
//     string s1="ABC";
//     string s2;
//     int i=0,j=0,count=0;
//     while(j<n)
//     {
//         s2.push_back(s[j]);
//         if(j>=s1.size()-1)
//         {
//             //cout<<s2<<endl;
//             if(s2==s1)
//             {
//                 count++;
//             }
//             s2.erase(0,1);
//             i++;
//         }
//         j++;
//     }
//     cout<<count;

//     return 0;
// }

int main()
{
    int n;cin>>n;
    cin.ignore();
    string s;cin>>s;
    string s1="ABC";
    int count =0;
    int l=s1.size();
   // cout<<l<<endl;
    for(int i=0;i<n;i++)
    {
        string s2=s.substr(i,l);
        if(s2==s1)
        {
            count++;
        }
    }
    cout<<count;
}