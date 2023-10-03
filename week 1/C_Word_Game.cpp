#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n = 3;
//         int m;
//         cin >> m;
//         cin.ignore();
//         string s;
//         getline(cin, s);
//         //cin.ignore();
//         string s1;
//         getline(cin, s1);
//         //cin.ignore();
//         string s2;
//         getline(cin, s2);

//         // cout<<s<<endl;
//         // cout<<s1<<endl;
//         // cout<<s2<<endl;
//         int ans1 = 0, ans2 = 0, ans3 = 0;
//         stringstream ss(s);
//         string word;
//         while (ss >> word)
//         {
//             int a = s1.find(word);
//             int b = s2.find(word);
//             if (a < 0 && b < 0)
//             {
//                 ans1 += 3;
//             }
//             else if (a < 0 && b >= 0 || a >= 0 && b < 0)
//             {
//                 ans1++;
//             }
//             // else if (a >= 0 && 0 <= b)
//             // {
//             //     ans1+=0;
//             // }
//         }

//         stringstream sss(s1);
//         string wo;
//         while (sss >> wo)
//         {
//             int a = s.find(wo);
//             int b = s2.find(wo);
//             if (a < 0 && b < 0)
//             {
//                 ans2 += 3;
//             }
//             else if (a < 0 && b >= 0 || a >= 0 && b < 0)
//             {
//                 ans2++;
//             }
//             // else if (a >= 0 && 0 <= b)
//             // {
//             //     ans2+=0;
//             // }
//         }

//         stringstream ssss(s2);
//         string wor;
//         while (ssss >> wor)
//         {
//             int a = s.find(wor);
//             int b = s1.find(wor);
//             if (a < 0 && b < 0)
//             {
//                 ans3 += 3;
//             }
//             else if (a < 0 && b >= 0 || a >= 0 && b < 0)
//             {
//                 ans3++;
//             }
//             // else if (a >= 0 && 0 <= b)
//             // {
//             //     ans3+=0;
//             // }
//         }
//          cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
//     }
//     return 0;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        vector<string> v[3];
        map<string, int> fre;
        for (int i = 0; i < 3; i++)
        {
            v[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
                fre[v[i][j]]++;
            }
        }
        int p[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (fre[v[i][j]] == 1)
                {
                    p[i] += 3;
                }
                else if (fre[v[i][j]] == 2)
                {
                    p[i] += 1;
                }
            }
        }
        cout << p[0] << " " << p[1] << " " << p[2] << endl;
    }
}