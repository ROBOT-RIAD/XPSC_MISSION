#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(26);
    for (int i = 0; i < 26; i++)
    {
        v[i] = 0;
    }
    for (char ch : s)
    {
        v[ch - 97]++;
    }
    bool flag=false;
    for (int i = 0; i < 26; i++)
    {
        if(v[i]==0)
        {
            char g=i+97;
            flag=false;
            cout<<g;
            break;
        }
        else
        {
            flag=true;
        }
        
    }
    if(flag)cout<<"None";
    return 0;
}